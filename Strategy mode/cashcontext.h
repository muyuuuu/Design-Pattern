#pragma once

#include "strategy.h"

class CashContext{
private:
    Strategy* S;
public:
    CashContext() = default;
    CashContext(Strategy* s) : S{s} {};
    // 不同的策略计算结果
    double getResult(){
        return S->getResult();
    }
};