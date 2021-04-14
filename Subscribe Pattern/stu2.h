#pragma once

#include "observerbase.h"
#include "notifierbase.h"

#include <iostream>

class stu2 : public observer {
private:
    std::string name;
    notifierBase* b = new notifierBase();
public:
    stu2() = default;
    stu2(std::string n, notifierBase* b_) : name{n}, b{b_} {} ;
    const virtual void update() override {
        std::cout << this->b->getState() << ", " << this->name << ", don't play" << std::endl;
    }
    ~stu2(){
        delete b;
    }
};