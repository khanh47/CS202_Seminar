#include <cstdlib>
#include <memory>

#include "Logistics/RoadLogistics/RoadLogistics.h"
#include "Logistics/MaritimeLogistics/MaritimeLogistics.h"

int main() {
    std::unique_ptr<Logistics> logistics;

    logistics = std::make_unique<RoadLogistics>();
    logistics->planDelivery();

    logistics = std::make_unique<MaritimeLogistics>();
    logistics->planDelivery();

    return EXIT_SUCCESS;
}
