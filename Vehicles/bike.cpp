#include "bike.hpp"

Bike::Bike(std::string licensePlateNumber) : Vehicle(licensePlateNumber, "Bike") {}

int Bike::calculateParkingFees(int hoursStayed) const {
    return rate * hoursStayed;
}