#include "Car.h"

Car::Car() : color(""), doors(0), brand(""), enginePtr(nullptr) {}

Car::Car(string color, int doors, string brand, Engine* enginePtr)
    : color(color), doors(doors), brand(brand), enginePtr(enginePtr) {}

Car::~Car() {
    delete enginePtr;
}

void Car::setColor(string color) {
    this->color = color;
}

void Car::setDoors(int doors) {
    this->doors = doors;
}

void Car::setBrand(string brand) {
    this->brand = brand;
}

void Car::setEngine(Engine* enginePtr) {
    this->enginePtr = enginePtr;
}

string Car::getColor() const {
    return color;
}

int Car::getDoors() const {
    return doors;
}

string Car::getBrand() const {
    return brand;
}

Engine* Car::getEngine() const {
    return enginePtr;
}

string Car::toString() const {
    return "Color: " + color + ", Doors: " + std::to_string(doors) + ", Brand: " + brand;
}
