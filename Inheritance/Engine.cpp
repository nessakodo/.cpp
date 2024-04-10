#include "Engine.h"

Engine::Engine(string model) : model(model) {}

Engine::~Engine() {}

string Engine::getModel() const {
    return model;
}

void Engine::setModel(string model) {
    this->model = model;
}
