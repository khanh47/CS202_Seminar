#pragma once

#include <memory>

#include "../Button/Button.h"
#include "../Checkbox/Checkbox.h"

class GUIFactory {
public:
    virtual ~GUIFactory() = default;

    virtual std::shared_ptr<Button> createButton() = 0;
    virtual std::shared_ptr<Checkbox> createCheckbox() = 0;
};
