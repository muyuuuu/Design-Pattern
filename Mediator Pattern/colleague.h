#pragma once

#include "mediator.h"

class Colleague {
public:
    Colleague() = default;
    virtual void send(std::string msg) {};
    virtual void notify(std::string msg) {};
    ~Colleague() {};
};