#pragma once

#include "stock1.h"
#include "stock2.h"

class Fund {
private:
    Stock1 s1;
    Stock2 s2;
public:
    Fund() : s1{Stock1()}, s2{Stock2()} {};
    const void buyFund() {
        this->s1.buy();
        this->s2.buy();
    }
    const void sellFund() {
        this->s1.sell();
        this->s2.sell();
    }
};