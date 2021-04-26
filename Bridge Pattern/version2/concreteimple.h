#pragma once

#include "implementor.h"

#include <iostream>

class ConcreteImplemetorA : public Implementor {
public:
    virtual void operation() override {
        std::cout << "A is runned" << std::endl;
    }
};

class ConcreteImplemetorB : public Implementor {
public:
    virtual void operation() override {
        std::cout << "B is runned" << std::endl;
    }
};