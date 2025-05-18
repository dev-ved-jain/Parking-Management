#ifndef TICKET_HEADER
#define TICKET_HEADER

#include "vehicle.hpp"
#include "parking_spot.hpp"

class Ticket {
private:
    Vehicle* vehicle;
    ParkingSpot* parkingSpot;
    std::string startTime;
public:
    Ticket(Vehicle* vehicle, ParkingSpot* parkingSpot, std::string startTime);
};

#endif