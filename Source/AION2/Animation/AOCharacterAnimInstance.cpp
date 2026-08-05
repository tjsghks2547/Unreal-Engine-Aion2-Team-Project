#include "Animation/AOCharacterAnimInstance.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Character/AOCharacterMovementComponent.h"

void UAOCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    APawn* Pawn = TryGetPawnOwner();
    if (!Pawn)
    {
        return;
    }

    Speed = Pawn->GetVelocity().Size2D();

    ACharacter* Character = Cast<ACharacter>(Pawn);
    if (!Character)
    {
        return;
    }

    bHasMoveInput = Character->GetCharacterMovement()->GetCurrentAcceleration().SizeSquared() > 0.f;

    bool bIsGlidingCustom = false;
    if (UAOCharacterMovementComponent* AOMovement = Cast<UAOCharacterMovementComponent>(Character->GetCharacterMovement()))
    {
        bIsGlidingCustom = (AOMovement->MovementMode == MOVE_Custom && AOMovement->CustomMovementMode == static_cast<uint8>(EAOMovementMode::Glide));
    }

    bIsInAir = Character->GetMovementComponent()->IsFalling() || Character->GetMovementComponent()->IsFlying() || bIsGlidingCustom;
}
