#pragma once

#include <memory>
#include <string>

#include "IXMLAnalyticsHook.h"
#include "JSONAnalyticsLibrary.h"

class XMLToJsonAnalyticsAdapter : public IXMLAnalyticsHook {
public:
    explicit XMLToJsonAnalyticsAdapter(
        std::shared_ptr<JSONAnalyticsLibrary> library
    );

    AnalyticsResult fetchAnalytics(const std::string& xmlData) override;

private:
    std::string convertXmlToJson(const std::string& xmlData);

    std::shared_ptr<JSONAnalyticsLibrary> jsonLib;
};
