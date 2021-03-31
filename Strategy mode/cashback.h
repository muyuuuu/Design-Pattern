#pragma once

#include "strategy.h"
#include <iostream>

class CashBack : public Strategy{
private:
    double origin{0}, back{0};
public:
    CashBack() = default;
    CashBack(double o, double b) : origin{o}, back{b} {};
    virtual void getData() override {
        std::cout << "Please enter the original price and the bach price." << std::endl;
        std::cin >> this->origin >> this->back;
    }
    const virtual double getResult() override{
        return this->origin - this->back;
    }
};