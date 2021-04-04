#pragma once

#include "component.h"
#include <iostream>

class compoHouse : public componetBase {
private:
    std::string name{"null"};
public:
    compoHouse() = default;
    compoHouse(std::string s) : name{s} {};
    const virtual void show() override {
        std::cout << std::endl << this->name << " has been decorated.";
    }
};