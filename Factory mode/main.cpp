#include <iostream>

#include "ui.h"
#include "factory.h"
#include "operator.h"

double getResult(operatorBase& p){
    return p.getResult();
}

int main(){

    std::cout << "Please Input two numbers: " << std::endl;
    getIn* in = new getIn();

    in->getNumber();
    double x = in->getOperatorx();
    double y = in->getOperatory();

    char c;
    std::cout << "Please select operator form + - * / %" << std::endl;
    std::cin >> c;

    operatorBase* f = operFactory(c).createOperate(x, y);
    std::cout << f->getResult() << std::endl;

    delete in, f;
    return 0;
}