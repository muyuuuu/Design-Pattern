#pragma once

#include "operatorAdd.h"
#include "operatorDiv.h"
#include "operatorMod.h"
#include "operatorSub.h"
#include "operatorMul.h"
#include "operator.h"

class operFactory{
private:
    char oper;
    double x, y;
public:
    operFactory() = default;
    operFactory(char c) : oper{c}{

    };
    // const没有意义，返回的不是常量引用或者常量指针就不需要const限定，因为总归是要赋值给其他变量的
    operatorBase* createOperate(double x, double y){
        switch (this->oper) {
            case '+' : return new operatorAdd(x, y); break;
            case '-' : return new operatorSub(x, y); break;
            case '*' : return new operatorMul(x, y); break;
            case '/' : return new operatorDiv(x, y); break;
            case '%' : return new operatorMod(x, y); break;
            default  : return new operatorAdd(x, y);
        }
    }
};