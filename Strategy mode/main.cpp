#include "factory.h"
#include "strategy.h"
#include "cashcontext.h"

#include <iostream>

int main(){

    std::cout << "Please Select Strategy. \n 1 means DisCounts. \n 2 means CashBack" << std::endl;

    // 工厂模式，确定实例化哪个算法
    int s = 0;
    std::cin >> s;

    Strategy* fac = Factory(s).createFactory();
    fac->getData();
    double result = CashContext(fac).getResult();

    std::cout << result << std::endl;

    return 0;
}