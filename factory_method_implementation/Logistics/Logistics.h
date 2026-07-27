#pragma once

#include <memory>

#include "../Transport/Transport.h"

class Logistics {
public:
    virtual ~Logistics() = default;

    void planDelivery();
    virtual std::shared_ptr<Transport> createTransport() = 0;
};
