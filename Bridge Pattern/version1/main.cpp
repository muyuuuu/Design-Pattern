#include "concretesoft.h"
#include "concretebrand.h"

int main(){

    BrandN n;
    Brand* b = &n;

    Game g;

    b->setSoftware(&g);
    b->run();
    
    BrandM m;
    b = &m;

    AddressList a;

    b->setSoftware(&a);
    b->run();

    return 0;
}