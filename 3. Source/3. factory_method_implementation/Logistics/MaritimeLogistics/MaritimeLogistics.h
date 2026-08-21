#pragma once

#include "../Logistics.h"

class MaritimeLogistics : public Logistics {
public:
    std::shared_ptr<Transport> createTransport() override;
};
