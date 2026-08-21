#include <cstdlib>
#include <memory>

#include "JSONAnalyticsLibrary.h"
#include "StockAppUI.h"
#include "XMLToJsonAnalyticsAdapter.h"

int main() {
    auto smartJSONLibrary = std::make_shared<JSONAnalyticsLibrary>();
    auto adapter =
        std::make_shared<XMLToJsonAnalyticsAdapter>(smartJSONLibrary);

    StockAppUI app(adapter);
    app.renderDashboard();
    app.displayCharts();

    return EXIT_SUCCESS;
}
