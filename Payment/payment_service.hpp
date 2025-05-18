#ifndef PAYMENT_SERVICE_HEADER
#define PAYMENT_SERVICE_HEADER

#include "payment_strategy.hpp"

class PaymentService {
private:
    PaymentStrategy* strategy;
public:
    PaymentService(PaymentStrategy* strategy);

    void processPayment(int amount);
};

#endif