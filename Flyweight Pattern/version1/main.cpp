#include "webfactory.h"

int main() {

    webFactory* f = new webFactory();

    webSite* w1 = f->getWeb("blog");
    w1->Use();

    webSite* w2 = f->getWeb("blog");
    w2->Use();

    webSite* w3 = f->getWeb("sell");
    w3->Use();

    std::cout << f->getWebSize();

    delete f;

    return 0;
}