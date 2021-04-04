#pragma once

#include "component.h"
#include "decorator.h"
#include <iostream>

class decorator2 : public Decorator {
private:
    componetBase* base;
    const std::string s{"Black Pans"};
public:
    decorator2() = default;
    void wrap(componetBase* b){
        this->base = b;
    }
    const virtual void show() override {
        std::cout << s << " ";
        this->base->show();
    }
};