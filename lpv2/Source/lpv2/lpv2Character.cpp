// Copyright Epic Games, Inc. All Rights Reserved.

#include "lpv2Character.h"
#include "lpv2Character.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"
#include "ThirdPersonMPProjectile.h"
#include "Online/OnlineSessionNames.h"
 

DEFINE_LOG_CATEGORY(LogTemplateCharacter);


//////////////////////////////////////////////////////////////////////////
// Alpv2Character

Alpv2Character::Alpv2Character():
CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateSessionComplete)),
FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this,&ThisClass::OnFindSessionComplete)),
JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;

	//Initialize projectile class
	ProjectileClass = AThirdPersonMPProjectile::StaticClass();
	//Initialize fire rate
	FireRate = 0.25f;
	bIsFiringWeapon = false;
 


	//Online Subsystem
	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if(OnlineSubsystem)
	{

		OnlineSessionInterface = OnlineSubsystem->GetSessionInterface();

		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Purple,
				FString::Printf(TEXT("Found Subsystem %s"), *OnlineSubsystem->GetSubsystemName().ToString()));
		}
	}
}


void Alpv2Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void Alpv2Character::CreateGameSession()
{
	if(!OnlineSessionInterface.IsValid())
	{
		return;
	}
	auto ExistingSession = OnlineSessionInterface->GetNamedSession(NAME_GameSession);
	if(ExistingSession!=nullptr)
	{

		OnlineSessionInterface->DestroySession(NAME_GameSession);
	}
	OnlineSessionInterface->AddOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegate);

	TSharedPtr<FOnlineSessionSettings> SessionSettings = MakeShareable(new FOnlineSessionSettings());

	SessionSettings->bIsLANMatch=false;
	SessionSettings->NumPublicConnections= 4;
	SessionSettings->bAllowJoinInProgress = true;
	SessionSettings->bAllowJoinViaPresence = true;
	SessionSettings-> bShouldAdvertise = true;
	SessionSettings-> bUsesPresence= true;
	SessionSettings-> bUseLobbiesIfAvailable = true;
	SessionSettings-> Set(FName("MatchType"), FString("FreeForAll"), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	OnlineSessionInterface->CreateSession(*LocalPlayer->GetPreferredUniqueNetId(),NAME_GameSession,*SessionSettings);
	
	
}

void Alpv2Character::JoinGamesession()
{
	check(OnlineSessionInterface);


	//Añadir a la lista de delegates
	OnlineSessionInterface->AddOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegate);
	
	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	SessionSearch->MaxSearchResults = 10000;
	SessionSearch->bIsLanQuery = false;
	SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

	const  ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	OnlineSessionInterface->FindSessions(*LocalPlayer->GetPreferredUniqueNetId(), SessionSearch.ToSharedRef());
	
		
		
	
}

void Alpv2Character::OpenLobby(){
	UWorld* World = GetWorld();
	if(World)
	{
		World->ServerTravel("Game/ThirdPerson/Maps/lobby?listen");
	}

}

void Alpv2Character::CallOpenlevel(const FString& address)
{

	UGameplayStatics::OpenLevel(this,*address);
	
}

void Alpv2Character::CallClientTravel(const FString& address)
{
	APlayerController* PlayerController= GetGameInstance()->GetFirstLocalPlayerController();
	if(PlayerController)
	{
		PlayerController->ClientTravel(address,TRAVEL_Absolute);
		
	}
		
}

void Alpv2Character::OnCreateSessionComplete(FName SessionNAme, bool bwasSucces)
{
	if(bwasSucces)
	{
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue,
			FString::Printf(TEXT("Create Session %s"),*SessionNAme.ToString()));
			UWorld* World = GetWorld();
			if(World)
			{
				World->ServerTravel(FString("Game/ThirdPerson/Maps/lobby?listen"));
			}


		}
	}
	else
	{
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Red,
				FString::Printf(TEXT("create session Failed")));
		}
	}
	
}


void Alpv2Character::OnFindSessionComplete(bool bWasSuccessful)
{
	check(OnlineSessionInterface);
	for(auto Result : SessionSearch->SearchResults)
	{
		FString Id = Result.GetSessionIdStr();
		FString User = Result.Session.OwningUserName;

		FString MatchType;
		Result.Session.SessionSettings.Get(FName("MatchType"), MatchType);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange,
				FString::Printf(TEXT("Id: %s, User: %s"), *Id, *User));
		}

		if(MatchType == FString("FreeForAll"))
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Silver,
					FString::Printf(TEXT("Joining Match Type: %s"),*MatchType));
			}

			OnlineSessionInterface->AddOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegate);

			const  ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
			
			OnlineSessionInterface->JoinSession(*LocalPlayer->GetPreferredUniqueNetId(), NAME_GameSession, Result);
		}
	}
}


void Alpv2Character::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	check(OnlineSessionInterface);
	FString Address;

	if(OnlineSessionInterface->GetResolvedConnectString(NAME_GameSession, Address))
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::MakeRandomSeededColor(34),
				FString::Printf(TEXT("Connect String: %s"),*Address));
		}

		APlayerController* PlayerController = GetGameInstance()->GetFirstLocalPlayerController();

		if(PlayerController)
		{
			PlayerController->ClientTravel(Address, TRAVEL_Absolute);
		}
	}
}


void Alpv2Character::OnHealthUpdate()
{

	//Client-specific functionality
	if (IsLocallyControlled())
	{
		FString healthMessage = FString::Printf(TEXT("You now have %f health remaining."), CurrentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, healthMessage);
 
		if (CurrentHealth <= 0)
		{
			FString deathMessage = FString::Printf(TEXT("You have been killed."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, deathMessage);
		}
	}
 
	//Server-specific functionality
	if (GetLocalRole() == ROLE_Authority)
	{
		FString healthMessage = FString::Printf(TEXT("%s now has %f health remaining."), *GetFName().ToString(), CurrentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, healthMessage);
	}
}
void Alpv2Character::OnRep_CurrentHealth()
{
	OnHealthUpdate();
}
 

void Alpv2Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//Replicate current health.
	DOREPLIFETIME(Alpv2Character, CurrentHealth);
}
void Alpv2Character::SetCurrentHealth(float healthValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		CurrentHealth = FMath::Clamp(healthValue, 0.f, MaxHealth);
		OnHealthUpdate();
	}
}
float Alpv2Character::TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damageApplied = CurrentHealth - DamageTaken;
	SetCurrentHealth(damageApplied);
	return damageApplied;
}
void Alpv2Character::StartFire()
{
	if (!bIsFiringWeapon)
	{
		bIsFiringWeapon = true;
		UWorld* World = GetWorld();
		World->GetTimerManager().SetTimer(FiringTimer, this, &Alpv2Character::StopFire, FireRate, false);
		HandleFire();
	}
}
 
void Alpv2Character::StopFire()
{
	bIsFiringWeapon = false;
}
 
void Alpv2Character::HandleFire_Implementation()
{
	FVector spawnLocation = GetActorLocation() + ( GetActorRotation().Vector()  * 100.0f ) + (GetActorUpVector() * 50.0f);
	FRotator spawnRotation = GetActorRotation();
 
	FActorSpawnParameters spawnParameters;
	spawnParameters.Instigator = GetInstigator();
	spawnParameters.Owner = this;
 
	AThirdPersonMPProjectile* spawnedProjectile = GetWorld()->SpawnActor<AThirdPersonMPProjectile>(spawnLocation, spawnRotation, spawnParameters);
}

//////////////////////////////////////////////////////////////////////////
// Input

void Alpv2Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &Alpv2Character::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &Alpv2Character::Look);
		PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &Alpv2Character::StartFire);
         

	}
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void Alpv2Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void Alpv2Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}