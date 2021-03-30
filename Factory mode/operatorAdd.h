#pragma once
#include "operator.h"
#include <iostream>
class operatorAdd : public operatorBase{
private:
    double x{0}, y{0};
public:
    operatorAdd() = default;
    operatorAdd(double x_, double y_) : x{x_}, y{y_}{
    };
    const virtual double getResult() override {
        return this->x + this->y;
    }
};