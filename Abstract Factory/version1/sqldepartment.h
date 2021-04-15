#pragma once

#include "Idepartment.h"
#include "department.h"

class SqlDepartment : public Idepartment {
public:
    virtual void Insert(Department u) override {
        std::cout << "SQL insert department" << std::endl;
    }
    const virtual void getDepartment(std::string s) override {
        std::cout << "SQL select department: " << s << std::endl;
    }
};