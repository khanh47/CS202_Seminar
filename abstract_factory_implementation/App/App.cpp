#include "App.h"
#include <iostream>
#include <memory>
#include <stdexcept>

App::App() {
    #if defined(_WIN32) || defined(_WIN64)
        std::cout << "Windows os detected!\n";
        _guiFactory = std::make_unique<WinFactory>();
    #elif defined(__APPLE__) && defined(__MACH__)
        std::cout << "Macos detected!\n";
        _guiFactory = std::make_unique<MacFactory>();
    #else
        throw std::runtime_error("Unsupported platform");
    #endif
}

App::App(std::string os) {
    if(os == "mac") {
        _guiFactory = std::make_unique<MacFactory>();
    }
    else if(os == "win") {
        _guiFactory = std::make_unique<WinFactory>();
    }
    else {
        throw std::runtime_error("Unknown os, make sure it is either 'win' or 'mac'");
    }
}

void App::createUI() {
    std::shared_ptr<Button> button1 = _guiFactory->createButton();
    std::shared_ptr<Button> button2 = _guiFactory->createButton();
    _buttons.push_back(button1);
    _buttons.push_back(button2);

    std::shared_ptr<Checkbox> checkbox1 = _guiFactory->createCheckbox();
    std::shared_ptr<Checkbox> checkbox2 = _guiFactory->createCheckbox();
    _checkboxes.push_back(checkbox1);
    _checkboxes.push_back(checkbox2);
}
