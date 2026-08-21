#include <iostream>
#include <string>
#include <utility>

#include "StockAppUI.h"

StockAppUI::StockAppUI(std::shared_ptr<IXMLAnalyticsHook> hook)
    : analyticsHook(std::move(hook)) {}

void StockAppUI::renderDashboard() {
    std::cout << "\n--- Rendering Dashboard ---\n";
    const std::string mockXML =
        "<stock><symbol>AAPL</symbol><price>150</price></stock>";

    AnalyticsResult result = analyticsHook->fetchAnalytics(mockXML);
    std::cout << "[StockAppUI] Received result: " << result.resultData << "\n";
}

void StockAppUI::displayCharts() {
    std::cout << "[StockAppUI] Drawing beautiful charts using the fetched analytics...\n";
}
