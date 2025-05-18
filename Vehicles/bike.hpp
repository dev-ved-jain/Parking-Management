#ifndef BIKE_HEADER
#define BIKE_HEADER

#include "vehicle.hpp"

class Bike : public Vehicle {
private:
    const static int rate = 50;
public: 
    Bike(std::string licensePlateNumber);

    int calculateParkingFees(int hoursStayed) const override;
};

#endif