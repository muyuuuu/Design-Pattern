#include "concreteplayer.h"
#include "translator.h"

int main() {

    Player* b = new forwards("lan");
    b->attack();

    b = new center("ling");
    b->defense();

    b = new Translator("A Chinese People");
    b->attack();
    b->defense();

    delete b;
    return 0;
}