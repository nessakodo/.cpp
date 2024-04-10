#ifndef SEDAN_H
#define SEDAN_H

#include "Car.h"

class Sedan : public Car {
public:
    Sedan(string color, int doors, string brand, Engine* enginePtr);
    virtual string getType() const override;
};

#endif
