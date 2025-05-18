#include "parking_floor.hpp"
#include "bike_parking_spot.hpp"
#include "car_parking_spot.hpp"

ParkingFloor::ParkingFloor(int floorNumber, int bikeSpots, int carSpots) {
    this->floorNumber = floorNumber;
    for(int spot_id = 0 ; spot_id < bikeSpots ; ++spot_id) {
        this->parkingSpotsList.push_back(new BikeParkingSpot(spot_id));
    }

    for(int spot_id = bikeSpots ; spot_id < bikeSpots + carSpots ; ++spot_id) {
        this->parkingSpotsList.push_back(new CarParkingSpot(spot_id));
    }
}

ParkingSpot* ParkingFloor::findAvailableParkingSpot(std::string vehicleType) {
    for(auto parkingSpot : this->parkingSpotsList) {
        if(!parkingSpot->isSpotOccupied() && parkingSpot->getSpotType() == vehicleType) {
            return parkingSpot;
        }
    }
    // no spots available
    return nullptr;
}

std::vector<ParkingSpot*> ParkingFloor::getParkingSpotsList() const {
    return this->parkingSpotsList;
}