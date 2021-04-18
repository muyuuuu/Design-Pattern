#pragma once

#include "state.h"
#include "noonstate.h"
#include <iostream>

class Work;

class Morning : public State {
    virtual void writeProgram(Work* w) override {
        if (w->getHour() < 12) {
            std::cout << "NICE" << std::endl;
        }
        else {
            NoonState* n;
            w->setState(n);
            w->writeProgram();
        }
    }
};