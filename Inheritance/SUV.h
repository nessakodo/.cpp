#ifndef SUV_H
#define SUV_H

#include "Car.h"

class SUV : public Car {
public:
    SUV(string color, int doors, string brand, Engine* enginePtr);
    virtual string getType() const override;
};

#endif
