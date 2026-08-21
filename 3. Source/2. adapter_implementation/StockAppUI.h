#pragma once

#include <memory>

#include "IXMLAnalyticsHook.h"

class StockAppUI {
public:
    explicit StockAppUI(std::shared_ptr<IXMLAnalyticsHook> hook);

    void renderDashboard();
    void displayCharts();

private:
    std::shared_ptr<IXMLAnalyticsHook> analyticsHook;
};
