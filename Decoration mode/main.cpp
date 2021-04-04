#include "compoPerson.h"
#include "decorator1.h"
#include "decorator2.h"
#include <iostream>

int main(){
    compoPerson* p = new compoPerson("lan ling");
    decorator1* t1 = new decorator1();
    decorator2* t2 = new decorator2();

    t1->wrap(p);
    t2->wrap(t1);
    t2->show();

    delete p, t1, t2;
    return 0;
}