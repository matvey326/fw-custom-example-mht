#define EFI_TACTICAL_TRANSMISSION true
#define EFI_TACTICAL_KNOCK true

#include "pch.h"
#include "board_overrides.h"

Gpio getCommsLedPin() { return Gpio::Unassigned; }
Gpio getRunningLedPin() { return Gpio::Unassigned; }
Gpio getWarningLedPin() { return Gpio::Unassigned; }

void setup_custom_board_overrides() {
    // 1. Включаем логику TCU (управление соленоидами АКПП)
    engineConfiguration->transmissionControllerMode = TransmissionControllerMode::Ford4R70W;

    // 2. Активируем контроль детонации (Knock Sensing)
    engineConfiguration->isKnockSensingEnabled = true;
}
