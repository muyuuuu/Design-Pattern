#pragma once

#include "proxybase.h"
#include "pursuit.h"
#include "girl.h"

class Proxy : public proxyBase {
private:
    // 不认识追她的人
    Pursuit p;
public:
    Proxy() = default;
    Proxy(Girl p_) {
        p.setGirl(p_);
    };
    const virtual void giveMoney() override{
        this->p.giveMoney();
    }
    const virtual void giveFlowers() override{
        this->p.giveFlowers();
    }
    const virtual void giveChocolate() override{
        this->p.giveChocolate();
    }
};
