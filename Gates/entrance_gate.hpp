#ifndef ENTRANCE_GATE_HEADER
#define ENTRANCE_GATE_HEADER

#include "parking_service.hpp"

class EntranceGate {
private:
    ParkingService* parkingService;
public:
    EntranceGate(ParkingService* parkingService);

    void processEntrance();
};

#endif