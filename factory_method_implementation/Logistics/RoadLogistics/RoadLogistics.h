#pragma once

#include "../Logistics.h"

class RoadLogistics : public Logistics {
public:
    std::shared_ptr<Transport> createTransport() override;
};
