#pragma once

#include "stock.h"

#include <iostream>

class Stock2 : public Stock {
public:
    const virtual void buy() override {
        std::cout << "buy stock2" << std::endl;
    }
    const virtual void sell() override {
        std::cout << "sell stock2" << std::endl;
    }
};