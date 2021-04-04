#pragma once

#include "component.h"
#include <iostream>

class compoPerson : public componetBase {
private:
    std::string name{"null"};
public:
    compoPerson() = default;
    compoPerson(std::string s) : name{s} {};
    const virtual void show() override {
        std::cout << std::endl << this->name << " has been decorated.";
    }
};