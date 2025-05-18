#ifndef CREDIT_CARD_PAYMENT_STRATEGY_HEADER
#define CREDIT_CARD_PAYMENT_STRATEGY_HEADER

#include "payment_strategy.hpp"

class CreditCardPaymentStrategy : public PaymentStrategy {
public:
    void processPayment(int amount) const override;
};

#endif