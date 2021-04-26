#pragma once

#include "abstract.h"

class RefineAbstract : public Abstraction {
private:
    Implementor* I = new Implementor();
public:
    virtual void setImplementor(Implementor* i) override {
        this->I = i;
    }
    virtual void operation() override {
        this->I->operation();
    };
    ~RefineAbstract(){
        delete I;
        std::cout << "here" << std::endl;
    }
};