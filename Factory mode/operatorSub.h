#pragma once
#include "operator.h"
#include <iostream>
class operatorSub : public operatorBase{
private:
    double x{0}, y{1};
public:
    operatorSub() = default;
    operatorSub(double x_, double y_) : x{x_}, y{y_}{
    };
    const virtual double getResult() override {
        return this->x - this->y;
    }
};