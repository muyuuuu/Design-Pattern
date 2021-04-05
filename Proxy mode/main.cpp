#include "pursuit.h"
#include "proxy.h"
#include "girl.h"

#include <iostream>

int main(){

    Girl g("Yan");
    Proxy p(g);

    p.giveChocolate();
    p.giveFlowers();
    p.giveMoney();

    // delete g;

    return 0;
}