#pragma once

#include "work.h"

class Work;

class State {
public:
    virtual void writeProgram(Work* w);
};