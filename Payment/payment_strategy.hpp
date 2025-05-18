#ifndef PAYMENT_STRATEGY_HEADER
#define PAYMENT_STRATEGY_HEADER

class PaymentStrategy {
public:
    virtual void processPayment(int amount) const = 0;
};

#endif