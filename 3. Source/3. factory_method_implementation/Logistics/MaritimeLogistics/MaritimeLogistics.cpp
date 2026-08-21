#include <iostream>
#include <memory>

#include "MaritimeLogistics.h"
#include "../../Transport/Ship/Ship.h"

std::shared_ptr<Transport> MaritimeLogistics::createTransport() {
    std::cout << "MaritimeLogistics: Creating a ship.\n";
    return std::make_shared<Ship>();
}
