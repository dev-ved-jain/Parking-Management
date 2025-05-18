#include "car.hpp"

Car::Car(std::string licensePlateNumber) : Vehicle(licensePlateNumber, "Car") {
}

int Car::calculateParkingFees(int hoursStayed) const {
    return rate * hoursStayed;
}