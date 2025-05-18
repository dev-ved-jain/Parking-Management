#ifndef EXIT_GATE_HEADER
#define EXIT_GATE_HEADER

#include "parking_service.hpp"
#include "payment_service.hpp"

class ExitGate {
private:
    ParkingService* parkingService;
    PaymentService* paymentService;
public:
    ExitGate(ParkingService* parkingService, PaymentService* paymentService);

    void processExit(int spotNumber, int hoursStayed);
};

#endif