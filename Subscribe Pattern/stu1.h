#pragma once

#include "observerbase.h"
#include "notifierbase.h"

#include <iostream>

class stu1 : public observer {
private:
    std::string name;
    notifierBase* b = new notifierBase();
public:
    stu1() = default;
    stu1(std::string n, notifierBase* b_) : name{n}, b{b_} {} ;
    const virtual void update() override {
        std::cout << this->b->getState() << ", " << this->name << ", don't sleep" << std::endl;
    }
    ~stu1(){
        delete b;
    }
};