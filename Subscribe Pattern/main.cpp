#include "boss.h"
#include "stu1.h"
#include "stu2.h"

int main(){

    boss b;
    stu1 s1{"L", &b};
    stu2 s2{"Y", &b};

    b.Attach(&s1);
    b.Attach(&s2);

    b.Detach(&s2);

    b.setState("I am back");
    b.notify();

    return 0;
}