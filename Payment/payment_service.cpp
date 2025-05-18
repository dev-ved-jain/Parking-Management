#include "payment_service.hpp"

PaymentService::PaymentService(PaymentStrategy* strategy) {
    this->strategy = strategy;
}

void PaymentService::processPayment(int amount) {
    this->strategy->processPayment(amount);
}