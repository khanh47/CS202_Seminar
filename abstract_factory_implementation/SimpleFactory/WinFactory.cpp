#include <iostream>
#include <memory>

#include "WinFactory.h"

std::shared_ptr<Button> WinFactory::createButton() {
    std::cout << "Created a Window-style Button!\n";

    return std::make_shared<WinButton>();
}

std::shared_ptr<Checkbox> WinFactory::createCheckbox() {
    std::cout << "Created a Window-style Checkbox!\n";

    return std::make_shared<WinCheckbox>();
}