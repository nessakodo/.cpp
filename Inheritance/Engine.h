#ifndef ENGINE_H
#define ENGINE_H

#include <string>
using std::string;

class Engine {
private:
    string model;

public:
    explicit Engine(string model);
    virtual ~Engine();

    string getModel() const;
    void setModel(string model);
};

#endif
