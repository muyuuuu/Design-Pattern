#include "person.h"
#include "director.h"
#include "thin.h"

int main(){

    thinPerson* t = new thinPerson();
    personDirector d(t);
    d.createPerson(100);

    delete t;
    return 0;
}