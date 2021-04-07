#pragma once

#include <iostream>
using std::cout;
using std::endl;

class Base {
public:
    const void sweep(){
        cout << "sweep" << endl;
    }
    const void wash(){
        cout << "wash" << endl;
    }
    const void bugrice(){
        cout << "bugrice" << endl;
    }
};