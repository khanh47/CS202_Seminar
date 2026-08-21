#pragma once

#include <string>

#include "AnalyticsResult.h"

class IXMLAnalyticsHook {
public:
    virtual ~IXMLAnalyticsHook() = default;

    virtual AnalyticsResult fetchAnalytics(const std::string& xmlData) = 0;
};
