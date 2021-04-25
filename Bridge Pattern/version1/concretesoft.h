#pragma once

#include "software.h"

#include <iostream>

class Game : public SoftWare {
public:
    virtual void run() override {
        std::cout << "play game" << std::endl;
    }
};

class AddressList : public SoftWare {
public:
    virtual void run() override {
        std::cout << "open Address list" << std::endl;
    }
};