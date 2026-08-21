#include <iostream>

#include "Logistics.h"

void Logistics::planDelivery() {
    std::shared_ptr<Transport> transport = createTransport();
    std::cout << "Logistics: Planning delivery...\n";
    transport->deliver();
}
