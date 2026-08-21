#pragma once

class Transport {
public:
    virtual ~Transport() = default;

    virtual void deliver() = 0;
};
