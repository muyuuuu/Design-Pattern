#include "concreteimple.h"

class Abstraction {
public:
    virtual void setImplementor(Implementor* i) {};
    virtual void operation() {};
};