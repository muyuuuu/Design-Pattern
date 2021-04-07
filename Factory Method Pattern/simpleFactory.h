#pragma once

#include "base.h"
#include "undergraduate.h"
#include "volunteer.h"

class SimpleFactory {
public:
    Base* res;
    Base* createFactory(int type) {
        switch (type) {
        case 1:
            res = new UnderGraduate();
            break;
        case 2:
            res = new Volunteer();
            break;
        default:
            res = new UnderGraduate();
            break;
        }
        return res;
    }
};