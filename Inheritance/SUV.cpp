#include "SUV.h"

SUV::SUV(string color, int doors, string brand, Engine* enginePtr)
    : Car(color, doors, brand, enginePtr) {}

string SUV::getType() const {
    return "SUV";
}
