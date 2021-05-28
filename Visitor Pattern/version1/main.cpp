#include "men.h"
#include "women.h"

#include <vector>

int main(){

    std::vector<Person*> v;

    Person* man1 = new Men();
    man1->setAction("success");

    Person* woman1 = new Women();
    woman1->setAction("success");

    Person* man2 = new Men();
    man2->setAction("fail");

    v.push_back(man1);
    v.push_back(woman1);
    v.push_back(man2);

    for (auto& i : v) {
        i->getConclusion();
    }

    delete man1, man2, woman1;

    return 0;
}