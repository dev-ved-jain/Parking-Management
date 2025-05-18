#include "upi_payment.hpp"
#include <iostream>

void UPIPaymentStrategy::processPayment(int amount) const {
    // process payment using upi
    std::cout << "Processing Payment using UPI of Rs." << amount << std::endl;
}