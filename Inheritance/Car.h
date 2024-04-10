#ifndef CAR_H
#define CAR_H

#include <string>
using std::string;

#include "Engine.h"

class Car {
private:
    string color;
    int doors;
    string brand;
    Engine* enginePtr;

public:
    Car();
    Car(string color, int doors, string brand, Engine* enginePtr);
    virtual ~Car();

    void setColor(string color);
    void setDoors(int doors);
    void setBrand(string brand);
    void setEngine(Engine* enginePtr);

    string getColor() const;
    int getDoors() const;
    string getBrand() const;
    Engine* getEngine() const;

    virtual string toString() const;
    virtual string getType() const = 0;
};

#endif
