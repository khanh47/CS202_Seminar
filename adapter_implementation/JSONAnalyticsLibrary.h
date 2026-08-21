#pragma once

#include <string>

#include "AnalyticsResult.h"

class JSONAnalyticsLibrary {
public:
    AnalyticsResult processJSONData(const std::string& jsonData);
};
