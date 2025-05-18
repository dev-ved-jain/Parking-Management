#include "ticket.hpp"

Ticket::Ticket(Vehicle* vehicle, ParkingSpot* parkingSpot, std::string startTime) {
    this->vehicle = vehicle;
    this->parkingSpot = parkingSpot;
    this->startTime = startTime;
}