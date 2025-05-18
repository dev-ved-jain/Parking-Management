#include "vehicle.hpp"

Vehicle::Vehicle(std::string licensePlateNumber, std::string vehicleType) {
    this->licensePlateNumber = licensePlateNumber;
    this->vehicleType = vehicleType;
}

std::string Vehicle::getVehicleType() const {
    return this->vehicleType;
}