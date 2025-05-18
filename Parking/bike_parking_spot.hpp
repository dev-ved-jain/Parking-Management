#ifndef BIKE_PARKING_SPOT_HEADER
#define BIKE_PARKING_SPOT_HEADER

#include "parking_spot.hpp"

class BikeParkingSpot : public ParkingSpot {
public:
    BikeParkingSpot(int spotNumber);

    bool canParkVehicle(Vehicle* vehicle) const;
};

#endif