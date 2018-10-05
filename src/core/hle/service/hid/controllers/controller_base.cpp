// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/hid/controllers/controller_base.h"

namespace Service::HID {
void ControllerBase::ActivateController() {
    if (is_activated) {
        OnRelease();
    }
    is_activated = true;
    OnInit();
}

void ControllerBase::DeactivateController() {
    if (is_activated) {
        OnRelease();
    }
    is_activated = false;
}

bool ControllerBase::IsControllerActivated() const {
    return is_activated;
}
// ControllerBase::~ControllerBase() = default;
}; // namespace Service::HID
