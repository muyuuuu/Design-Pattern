#include "concreteMediator.h"

int main(){

    concreteMediator* m = new concreteMediator();

    concreteColleague1* c1 = new concreteColleague1(m);
    concreteColleague2* c2 = new concreteColleague2(m);

    m->setCon1(c1);
    m->setCon2(c2);

    c1->send("eat?");
    c2->send("no");

    delete m, c1, c2;

    return 0;
}