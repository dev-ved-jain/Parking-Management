#ifndef VEHICLE
#define VEHICLE

#include <string>

class Vehicle {
private:
    std::string licensePlateNumber;
    std::string vehicleType;
public:
    Vehicle(std::string licensePlateNumber, std::string vehicleType);

    std::string getVehicleType() const;

    virtual int calculateParkingFees(int hoursStayed) const = 0;
};

#endif