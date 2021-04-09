#include "testpaper.h"
#include "stu1.h"
#include "stu2.h"

int main(){

    TestPaper* s1 = new S1();
    s1->Question1();
    s1->Question2();
    s1->Question3();

    TestPaper* s2 = new S2();
    s2->Question1();
    s2->Question2();
    s2->Question3();

    delete s1, s2;

    return 0;
}