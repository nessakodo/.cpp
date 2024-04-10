#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Car.h"
#include "Sportscar.h"
#include "SUV.h"
#include "Sedan.h"

using namespace std;

Car* createRandomCar();

int main() {
    srand(time(0)); // Seed for random number generation

    vector<Car*> cars;

    // Get user input for how many cars to build
    int numCars;
    cout << "Enter the number of cars to build: ";
    cin >> numCars;

    // Generate random cars
    for (int i = 0; i < numCars; ++i) {
        cars.push_back(createRandomCar());
    }

    // Display cars
    for (Car* car : cars) {
        cout << car->toString() << endl;
    }

    // Cleanup
    for (Car* car : cars) {
        delete car;
    }

    return 0;
}

Car* createRandomCar() {
    int randomNum = rand() % 3;
    Engine* engine = new Engine("RandomEngine");

    switch (randomNum) {
        case 0:
            return new Sportscar("Red", 2, "RandomBrand", engine, true, true);
        case 1:
            return new SUV("Black", 4, "RandomBrand", engine);
        case 2:
            return new Sedan("Blue", 4, "RandomBrand", engine);
        default:
            return nullptr;
    }
}
