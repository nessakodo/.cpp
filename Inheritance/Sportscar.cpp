#include "Sportscar.h"

Sportscar::Sportscar(string color, int doors, string brand, Engine* enginePtr, bool sunroof, bool transmission)
    : Car(color, doors, brand, enginePtr), sunroof(sunroof), transmission(transmission) {}

string Sportscar::getType() const {
    return "Sportscar";
}
