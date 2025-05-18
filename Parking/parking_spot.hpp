#ifndef PARKING_SPOT_HEADER
#define PARKING_SPOT_HEADER

#include "vehicle.hpp"

class ParkingSpot {
private:
    int spotNumber;
    Vehicle* vehicle;
    bool isOccupied;
    std::string spotType;
public:
    ParkingSpot(int spotNumber, std::string spotType);

    virtual bool canParkVehicle(Vehicle* vehicle) const = 0;

    void parkVehicle(Vehicle* vehicle);

    void vacate();

    bool isSpotOccupied() const;

    int getSpotNumber() const;

    std::string getSpotType() const;

    Vehicle* getVehicle() const;
};

#endif