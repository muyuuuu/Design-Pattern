#pragma once

#include "testpaper.h"

#include <iostream>

using std::string;

class S1 : public TestPaper {
public:
    const virtual string Answer1() override {
        return "A";
    }
    const virtual string Answer2() override {
        return "B";
    }
    const virtual string Answer3() override {
        return "C";
    }
};