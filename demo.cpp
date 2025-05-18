#include <iostream>
#include <vector>
#include "parking_floor.hpp"
#include "parking_service.hpp"
#include "entrance_gate.hpp"
#include "exit_gate.hpp"
#include "credit_card_payment.hpp"

int main() {
    // create a floor
    ParkingFloor *basementFloor = new ParkingFloor(1, 2, 3);
    
    // add floor to our parking service
    std::vector<ParkingFloor*> floors;
    floors.push_back(basementFloor);
    ParkingService* parkingService = new ParkingService(floors);

    PaymentService* paymentService = new PaymentService(new CreditCardPaymentStrategy());

    // init entrance and exit gates
    EntranceGate* entrance = new EntranceGate(parkingService);
    ExitGate* exit = new ExitGate(parkingService, paymentService);
    
    // process entrance
    entrance->processEntrance();

    entrance->processEntrance();

    entrance->processEntrance();

    exit->processExit(0, 2);
    
    return 0;
}
