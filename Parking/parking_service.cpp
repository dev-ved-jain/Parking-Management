#include "parking_service.hpp"
#include <iostream>

ParkingService::ParkingService(std::vector<ParkingFloor*>& floors) {
    this->floors = floors;
}

ParkingSpot* ParkingService::findAvailableParkingSpot(std::string vehicleType) {
    for(auto floor : this->floors) {
        ParkingSpot* spot = floor->findAvailableParkingSpot(vehicleType);
        if(spot != nullptr) {
            return spot;
        }
    }
    return nullptr;
}

ParkingSpot* ParkingService::parkVehicle(Vehicle* vehicle) {
    ParkingSpot* spot =  findAvailableParkingSpot(vehicle->getVehicleType());
    if(spot != nullptr) {
        spot->parkVehicle(vehicle);
        return spot;
    }
    return nullptr;
}

void ParkingService::vacateSpot(ParkingSpot* spot, Vehicle* vehicle) {
    if(spot == nullptr || !spot->isSpotOccupied() || spot->getVehicle() != vehicle) {
        std::cout << "Invalid operation! Either spot is vacant or vehicle does not match" << std::endl;
        return;
    }

    spot->vacate();

    std::cout << "spot vacated successfully " << spot->getSpotNumber() << std::endl;
}

ParkingSpot* ParkingService::getSpotByNumber(int spotNumber) {
    for(auto floor : floors) {
        for(auto spot : floor->getParkingSpotsList()) {
            if(spot->getSpotNumber() == spotNumber) {
                return spot;
            }
        }
    }
    return nullptr;
}