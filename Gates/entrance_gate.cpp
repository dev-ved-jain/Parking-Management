#include "entrance_gate.hpp"
#include <iostream>
#include <string>
#include "vehicle_factory.hpp"

EntranceGate::EntranceGate(ParkingService* parkingService) {
    this->parkingService = parkingService;
}

void EntranceGate::processEntrance() {
    
    std::string licensePlateNumber;
    std::cout << "Enter the vehicle license plate: " << std::endl;
    std::cin >> licensePlateNumber;

    std::string vehicleType;
    std::cout << "Enter vehicle type (Car or Bike)" << std::endl;
    std::cin >> vehicleType;

    Vehicle* vehicle = VehicleFactory::createVehicle(licensePlateNumber, vehicleType);

    if(vehicle == nullptr) {
        std::cout << "Invalid vehicle type only Car and Bike are allowed" << std::endl;
        return;
    }

    // try to park this vehicle
    ParkingSpot* spot = parkingService->parkVehicle(vehicle);
    if(spot != nullptr) {
        std::cout << "Vehicle parked successfully at " << spot->getSpotNumber() << std::endl;
    } else {
        std::cout << "No available spots for vehicle type" << std::endl;
    }

}