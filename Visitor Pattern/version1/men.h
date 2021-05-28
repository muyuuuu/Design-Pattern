#pragma once

#include "person.h"

class Men : public Person {
public:
    virtual void getConclusion() override {
        if (sign == "success")
            std::cout << "men success" << std::endl;
        else if (sign == "fail")
            std::cout << "men fail" << std::endl;
        else if (sign == "love")
            std::cout << "men fail" << std::endl;
    }
};