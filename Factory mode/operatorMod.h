#pragma once
#include "operator.h"
#include <iostream>
class operatorMod : public operatorBase{
private:
    double x{0}, y{0};
public:
    operatorMod() = default;
    operatorMod(double x_, double y_) : x{x_}, y{y_}{

    };
    const virtual double getResult() override {
        return static_cast<int>(this->x) % static_cast<int>(this->y);
    }
};