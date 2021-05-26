#include "conexpress.h"

int main (){

    playContext* p = new playContext("123");

    Note* n = new Note();

    n->interpret(p);

    delete p, n;

    return 0;
}