#include "exit_gate.hpp"
#include <iostream>

ExitGate::ExitGate(ParkingService* parkingService, PaymentService* paymentService) {
    this->parkingService = parkingService;
    this->paymentService = paymentService;
}

void ExitGate::processExit(int spotNumber, int hoursStayed) {
    ParkingSpot* spot = parkingService->getSpotByNumber(spotNumber);

    if(spot == nullptr || !spot->isSpotOccupied()) {
        std::cout << "Invalid or vacant spot" << std::endl;
        return;
    }

    // get vehicle
    Vehicle* vehicle = spot->getVehicle();
    if(vehicle == nullptr) {
        std::cout << "No Vehicle found in the spot" << std::endl;
        return;
    }

    // calculate amount 
    int amount = vehicle->calculateParkingFees(hoursStayed);

    // process payment
    this->paymentService->processPayment(amount);
    
    parkingService->vacateSpot(spot, vehicle);
}

