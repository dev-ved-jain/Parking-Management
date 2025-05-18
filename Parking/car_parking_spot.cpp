#include "car_parking_spot.hpp"

CarParkingSpot::CarParkingSpot(int spotNumber) : ParkingSpot(spotNumber, "Car") {

}

bool CarParkingSpot::canParkVehicle(Vehicle* vehicle) const {
    return vehicle->getVehicleType() == "Car";
}