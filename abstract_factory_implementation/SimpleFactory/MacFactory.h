#pragma once

#include <memory>

#include "IFactory.h"
#include "../Button/MacButton.h"
#include "../Checkbox/MacCheckbox.h"

class MacFactory: public GUIFactory {
public:
    std::shared_ptr<Button> createButton() override;
    std::shared_ptr<Checkbox> createCheckbox() override;
};