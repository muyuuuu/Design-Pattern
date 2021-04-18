#pragma once

#include "state.h"
#include <iostream>

class Work;

class sleep : public State {
public:
    virtual void writeProgram(Work* w) override {
        std::cout << w->getHour() << ", to sleep" << std::endl;
    }
};