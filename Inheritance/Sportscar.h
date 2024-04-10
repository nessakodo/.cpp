#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class Sportscar : public Car {
private:
    bool sunroof;
    bool transmission;

public:
    Sportscar(string color, int doors, string brand, Engine* enginePtr, bool sunroof, bool transmission);
    virtual string getType() const override;
};

#endif
