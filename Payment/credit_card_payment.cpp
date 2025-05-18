#include "credit_card_payment.hpp"
#include <iostream>

void CreditCardPaymentStrategy::processPayment(int amount) const {
    // process payment using credit card
    std::cout << "Processing Payment using Credit Card of Rs." << amount << std::endl;
}