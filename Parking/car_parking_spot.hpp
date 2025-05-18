#ifndef CAR_PARKING_SPOT_HEADER
#define CAR_PARKING_SPOT_HEADER

#include "parking_spot.hpp"

class CarParkingSpot : public ParkingSpot {
public:
    CarParkingSpot(int spotNumber);

    bool canParkVehicle(Vehicle* vehicle) const;
};

#endif