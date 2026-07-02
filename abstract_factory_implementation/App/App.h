#pragma once

#include <memory>
#include <string>
#include <vector>

#include "../SimpleFactory/IFactory.h"
#include "../SimpleFactory/MacFactory.h"
#include "../SimpleFactory/WinFactory.h"
#include "../Button/Button.h"

class App {
public:
    App();
    App(std::string os);
    ~App() = default;

    void createUI();

private:
    std::unique_ptr<GUIFactory> _guiFactory;
    std::vector<std::shared_ptr<Button>> _buttons;
    std::vector<std::shared_ptr<Checkbox>> _checkboxes;
};
