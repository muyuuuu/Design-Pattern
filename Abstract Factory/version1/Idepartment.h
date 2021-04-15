#pragma once

#include "department.h"

#include <iostream>

class Idepartment {
public:
    virtual void Insert(Department u) {};
    const virtual void getDepartment(std::string s) {};
};