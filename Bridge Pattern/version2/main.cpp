#include "refineabstract.h"

int main(){

    ConcreteImplemetorA a;
    RefineAbstract r;

    Abstraction* ab = &r;

    ab->setImplementor(&a);
    ab->operation();

    ConcreteImplemetorB b;
    ab->setImplementor(&b);
    ab->operation();

    return 0;
}