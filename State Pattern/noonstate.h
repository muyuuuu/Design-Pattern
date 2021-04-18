#pragma once

#include "state.h"
#include "sleep.h"
#include <iostream>

class Work;

class NoonState : public State {
public:
    virtual void writeProgram(Work* w) override {
        if (w->getHour() < 17) {
            std::cout << "Tired" << std::endl;
        }
        else {
            sleep* s;
            w->setState(s);
            w->writeProgram();
        }
    }
};