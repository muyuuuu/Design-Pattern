#include "concreteit.h"

#include <iostream>

int main (){

    concreteAggregate<int> a;

    a.setItem(12);
    a.setItem(13);
    a.setItem(14);
    a.setItem(15);

    concreteIt<int> i{a};
    
    while (!i.isDone()) {
        std::cout << "scan: " << i.current() << std::endl;
        i.next();
    }

    return 0;
}