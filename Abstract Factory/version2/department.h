#pragma once

#include <iostream>

class Department {
private:
    std::string de{""};
public:
    Department() = default;
    Department(std::string s) : de{s} {};
};