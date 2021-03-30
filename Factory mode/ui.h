#pragma once
#include <iostream>
class getIn{
private:
    double x{0}, y{0};
public:
    getIn()=default;

    void getNumber(){
        double t1, t2;
        std::cin >> t1 >> t2;
        x = t1;
        y = t2;
    }

    const double getOperatorx(){
        return this->x;
    }

    const double getOperatory(){
        return this->y;
    }
};