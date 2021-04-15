#pragma once

#include "Idepartment.h"
#include "department.h"

class OracleDepartment : public Idepartment {
public:
    virtual void Insert(Department u) override {
        std::cout << "Oracle insert department" << std::endl;
    }
    const virtual void getDepartment(std::string s) override {
        std::cout << "Oracle select department: " << s << std::endl;
    }
};