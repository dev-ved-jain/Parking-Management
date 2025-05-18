#ifndef CAR_HEADER
#define CAR_HEADER

#include "vehicle.hpp"

class Car : public Vehicle {
private:
    const static int rate = 100;
public:
    Car(std::string licensePlateNumber);

    int calculateParkingFees(int hoursStayed) const override;
};

#endif