#pragma once

#include <iostream>
#include "Colleague.h"

class Mediator {
public:
    virtual void send(std::string msg, Colleague* c) {};
    virtual ~Mediator() {};
};