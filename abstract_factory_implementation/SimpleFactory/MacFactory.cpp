#include <iostream>
#include <memory>

#include "MacFactory.h"

std::shared_ptr<Button> MacFactory::createButton() {
    std::cout << "Created a Mac-Style Button!\n";
    
    return std::make_shared<MacButton>();
}

std::shared_ptr<Checkbox> MacFactory::createCheckbox() {
    std::cout << "Created a Mac-Style Checkbox!\n";

    return std::make_shared<MacCheckbox>();
}