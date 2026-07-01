#define EFI_TACTICAL_TRANSMISSION true
#include "pch.h"
#include "board_overrides.h"

Gpio getCommsLedPin() {
	return Gpio::Unassigned;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

void setup_custom_board_overrides() {
engineConfiguration->transmissionControllerMode = TransmissionControllerMode::Ford4R70W;
}
