#include "bike_parking_spot.hpp"

BikeParkingSpot::BikeParkingSpot(int spotNumber) : ParkingSpot(spotNumber, "Bike") {

}

bool BikeParkingSpot::canParkVehicle(Vehicle* vehicle) const {
    return vehicle->getVehicleType() == "Bike";
}