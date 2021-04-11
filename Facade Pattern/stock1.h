#pragma once

#include "stock.h"

#include <iostream>

class Stock1 : public Stock {
public:
    const virtual void buy() override {
        std::cout << "buy stock1" << std::endl;
    }
    const virtual void sell() override {
        std::cout << "sell stock1" << std::endl;
    }
};