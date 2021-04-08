#include "resume.h"
// #include "workExper.h"

#include <iostream>

using std::cout;
using std::endl;

int main(){

    // WorkExperience w;

    Resume r{"lanling", "22", "male"};
    r.setExper("beijing", "yiliu");

    Resume b = r.clone();
    b.setExper("beijing", "liuyi");

    r.show();
    b.show();

    return 0;
}