#pragma once

#include <memory>

#include "IFactory.h"
#include "../Button/WinButton.h"
#include "../Checkbox/WinCheckbox.h"

class WinFactory: public GUIFactory {
public:
    std::shared_ptr<Button> createButton() override;
    std::shared_ptr<Checkbox> createCheckbox() override;
};