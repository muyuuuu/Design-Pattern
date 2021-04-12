#pragma once

#include "person.h"
#include <iostream>

class thinPerson : public Person {
private:
    int weight;
public:
    virtual void buildBody(int w) override {
        this->weight = w;
        std::cout << "The person's weight is " << this->weight << std::endl;
    }
};