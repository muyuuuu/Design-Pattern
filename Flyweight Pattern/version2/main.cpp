#include "webfactory.h"

int main() {

    User u1{"lan"};
    User u2{"ling"};
    User u3{"muyu"};

    webFactory* f = new webFactory();

    webSite* w1 = f->getWeb("blog");
    w1->Use(u1);

    webSite* w2 = f->getWeb("blog");
    w2->Use(u2);

    webSite* w3 = f->getWeb("sell");
    w3->Use(u3);

    std::cout << f->getWebSize();

    delete f;

    return 0;
}