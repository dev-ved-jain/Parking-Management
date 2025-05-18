#ifndef UPI_PAYMENT_HEADER
#define UPI_PAYMENT_HEADER

#include "payment_strategy.hpp"

class UPIPaymentStrategy : public PaymentStrategy {
public:
    void processPayment(int amount) const override;
};

#endif