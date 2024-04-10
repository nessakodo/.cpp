#include "Sedan.h"

Sedan::Sedan(string color, int doors, string brand, Engine* enginePtr)
    : Car(color, doors, brand, enginePtr) {}

string Sedan::getType() const {
    return "Sedan";
}
