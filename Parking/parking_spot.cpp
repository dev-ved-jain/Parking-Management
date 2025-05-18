#include "parking_spot.hpp"

ParkingSpot::ParkingSpot(int spotNumber, std::string spotType) {
    this->spotNumber = spotNumber;
    this->spotType = spotType;
    this->isOccupied = false;
    this->vehicle = nullptr;
}

bool ParkingSpot::isSpotOccupied() const {
    return this->isOccupied;
}

void ParkingSpot::parkVehicle(Vehicle* vehicle) {
    // check if parking spot is already occupied
    if(isOccupied) {
        throw "Parking spot is already occupied";
    }

    // check if vehicle type and spot type same
    if(!canParkVehicle(vehicle)) {
        throw "This Parking spot is not suitable";
    }

    this->vehicle = vehicle;
    this->isOccupied = true;    
}

void ParkingSpot::vacate() {
    // check if its filled
    if(!isOccupied) {
        throw "Parking spot is already empty";
    }

    this->vehicle = nullptr;

    this->isOccupied = false;
}

int ParkingSpot::getSpotNumber() const {
    return this->spotNumber;
}

std::string ParkingSpot::getSpotType() const {
    return this->spotType;
}

Vehicle* ParkingSpot::getVehicle() const {
    return this->vehicle;
}