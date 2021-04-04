#pragma once

#include "component.h"
#include "decorator.h"
#include <iostream>

class decorator1 : public Decorator {
private:
    componetBase* base;
    const std::string s{"T-shirt"};
public:
    decorator1() = default;
    void wrap(componetBase* b){
        this->base = b;
    }
    const virtual void show() override {
        std::cout << s << " ";
        this->base->show();
    }
};