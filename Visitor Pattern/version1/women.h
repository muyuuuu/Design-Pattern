#pragma once

#include "person.h"

class Women : public Person {
public:
    virtual void getConclusion() override {
        if (sign == "success")
            std::cout << "women success" << std::endl;
        else if (sign == "fail")
            std::cout << "women fail" << std::endl;
        else if (sign == "love")
            std::cout << "women fail" << std::endl;
    }
};