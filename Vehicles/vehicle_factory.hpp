#ifndef VEHICLE_FACTORY
#define VEHICLE_FACTORY

#include "vehicle.hpp"
#include "car.hpp"
#include "bike.hpp"

class VehicleFactory {
public:
    static Vehicle* createVehicle(std::string licensePlateNumber, std::string vehicleType);
};

#endif