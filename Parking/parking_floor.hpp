#ifndef PARKING_FLOOR_HEADER
#define PARKING_FLOOR_HEADER

#include <vector>
#include "parking_spot.hpp"

class ParkingFloor {
private:
    int floorNumber;
    std::vector<ParkingSpot*> parkingSpotsList;
public:
    ParkingFloor(int floorNumber, int bikeSpots, int carSpots);

    ParkingSpot* findAvailableParkingSpot(std::string vehicleType); 

    std::vector<ParkingSpot*> getParkingSpotsList() const;
};

#endif