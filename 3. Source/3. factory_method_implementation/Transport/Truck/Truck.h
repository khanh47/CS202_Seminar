#pragma once

#include "../Transport.h"

class Truck : public Transport {
public:
    void deliver() override;
};
