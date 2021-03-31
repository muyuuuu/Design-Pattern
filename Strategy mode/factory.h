#pragma once

#include "strategy.h"
#include "discounts.h"
#include "cashback.h"

class Factory{
private:
    int select = -1;
public:
    Factory() = default;
    Factory(int i) : select{i} {};
    Strategy* createFactory() {
        switch (this->select) {
            case 1 : return new DisCounts(); break;
            case 2 : return new CashBack(); break;
            default: return new CashBack();
        }
    }
};