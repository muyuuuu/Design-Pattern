#pragma once

#include "state.h"
#include "morning.h"

class Morning;

class Work {
private:
    bool finish{false};
    int hour{0};
    State* current = new Morning;
public:
    int getHour() const {
        return this->hour;
    }
    bool isFinished() const {
        return finish;
    }
    void setHour(int h){
        hour = h;
    }
    void setState(State* s) {
        current = s;
    }
    void writeProgram() {
        this->current->writeProgram(this);
    }
};