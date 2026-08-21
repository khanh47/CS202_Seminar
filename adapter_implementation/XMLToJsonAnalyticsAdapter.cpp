#include <iostream>
#include <utility>

#include "XMLToJsonAnalyticsAdapter.h"

XMLToJsonAnalyticsAdapter::XMLToJsonAnalyticsAdapter(
    std::shared_ptr<JSONAnalyticsLibrary> library
) : jsonLib(std::move(library)) {}

std::string XMLToJsonAnalyticsAdapter::convertXmlToJson(
    const std::string& xmlData
) {
    static_cast<void>(xmlData);
    std::cout << "[Adapter] Converting XML data to JSON format...\n";
    return "{ \"converted_from_xml\": true }";
}

AnalyticsResult XMLToJsonAnalyticsAdapter::fetchAnalytics(
    const std::string& xmlData
) {
    std::cout << "[Adapter] Received XML: " << xmlData << "\n";

    std::string jsonData = convertXmlToJson(xmlData);
    return jsonLib->processJSONData(jsonData);
}
