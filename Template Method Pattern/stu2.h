#pragma once

#include "testpaper.h"

#include <iostream>

using std::string;

class S2 : public TestPaper {
public:
    const virtual string Answer1() override {
        return "D";
    }
    const virtual string Answer2() override {
        return "C";
    }
    const virtual string Answer3() override {
        return "B";
    }
};