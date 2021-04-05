#pragma once

#include <iostream>

class Girl {
private:
    std::string name{"None"};
public:
    Girl() = default;
    Girl(std::string n) : name{n} {};
    const std::string getName() {
        return this->name;
    }
};