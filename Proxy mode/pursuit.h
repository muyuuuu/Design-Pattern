#pragma once

#include "proxybase.h"
#include "girl.h"

#include <iostream>

class Pursuit : public proxyBase {
private:
    Girl g;
public:
    Pursuit() = default;
    void setGirl(Girl g_){
        this->g = g_;
    }
    const virtual void giveMoney() override{
        std::cout << this->g.getName() << ", give you some money" << std::endl;
    }
    const virtual void giveFlowers() override{
        std::cout << this->g.getName() << ", give you some flowers" << std::endl;
    }
    const virtual void giveChocolate() override{
        std::cout << this->g.getName() << ", give you some chocolate" << std::endl;
    }
    // ~Pursuit(){
    //     delete g;
    // }
};