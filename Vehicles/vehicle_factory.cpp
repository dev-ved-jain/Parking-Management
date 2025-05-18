#include "vehicle_factory.hpp"

Vehicle* VehicleFactory::createVehicle(std::string licensePlateNumber, std::string vehicleType) {
    if(vehicleType == "Car") {
        return new Car(licensePlateNumber);
    } else if(vehicleType == "Bike") {
        return new Bike(licensePlateNumber);
    }
    return nullptr;
}