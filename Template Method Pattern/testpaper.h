#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class TestPaper {
public:
    const virtual string Answer1() = 0;
    const void Question1() {
        cout << "Problem 1: " << Answer1() << endl;
    }

    const virtual string Answer2() = 0;
    const void Question2() {
        cout << "Problem 2: " << Answer2() << endl;
    }
    
    const virtual string Answer3() = 0;
    const void Question3() {
        cout << "Problem 3: " << Answer3() << endl;
    }
};