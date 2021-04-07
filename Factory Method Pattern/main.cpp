#include "factory.h"
#include "undergraduateFac.h"
#include "base.h"

int main(){

    IFactory* fac = new underGraduateFactory();
    Base* s = fac->create();

    s->bugrice();
    s->sweep();
    s->wash();

    delete fac;
    return 0;
}