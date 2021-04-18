#pragma once

#include "state.h"
#include "sleep.h"
#include <iostream>

class Work;

class Night : public State {
public:
    virtual void writeProgram(Work* w) override {
        sleep* s = new sleep();
        if (w->isFinished()) {
            w->setState(s);
            w->writeProgram();
        }
        if (w->getHour() < 21) {
            std::cout << "So tired" << std::endl;
        }
        else {
            w->setState(s);
            w->writeProgram();
        }
    }

};