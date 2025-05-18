#ifndef PARKING_SERVICE_HEADER
#define PARKING_SERVICE_HEADER

#include <vector>
#include "parking_floor.hpp"

class ParkingService {
private:
    std::vector<ParkingFloor*> floors;
public:
    ParkingService(std::vector<ParkingFloor*>& floors);

    ParkingSpot* findAvailableParkingSpot(std::string vehicleType);

    ParkingSpot* parkVehicle(Vehicle* vehicle);
    
    void vacateSpot(ParkingSpot* spot, Vehicle* vehicle);

    ParkingSpot* getSpotByNumber(int spotNumber);
};

#endif