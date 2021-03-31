#pragma once

#include "strategy.h"
#include <iostream>

class DisCounts : public Strategy{
private:
    double origin{0}, dis{1.0};
public:
    DisCounts() = default;
    virtual void getData() override {
        std::cout << "Please enter the original price and the discounts." << std::endl;
        std::cin >> this->origin >> this->dis;
    }
    const virtual double getResult() override {
        return this->origin * this->dis;
    }
};