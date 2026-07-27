#include <iostream>
#include <memory>

#include "RoadLogistics.h"
#include "../../Transport/Truck/Truck.h"

std::shared_ptr<Transport> RoadLogistics::createTransport() {
    std::cout << "RoadLogistics: Creating a truck.\n";
    return std::make_shared<Truck>();
}
