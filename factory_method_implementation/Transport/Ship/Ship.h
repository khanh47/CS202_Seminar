#pragma once

#include "../Transport.h"

class Ship : public Transport {
public:
    void deliver() override;
};
