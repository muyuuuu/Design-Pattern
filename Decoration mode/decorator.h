#pragma once

#include "component.h"
#include "compoPerson.h"

class Decorator : public componetBase{
private:
    componetBase* base;
public:
    Decorator() = default;
    Decorator(componetBase* b_){
        this->base = b_;
    };
    const virtual void show() override {
        this->base->show();
    }
};