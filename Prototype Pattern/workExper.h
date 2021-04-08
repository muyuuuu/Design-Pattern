#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WorkExperience {
private:
    string area;
    string company;
public:
    WorkExperience() = default;
    void setArea(string a) {
        this->area = a;
    }
    void setCompany(string c) {
        this->company = c;
    }
    const string getArea() {
        return this->area;
    }
    const string getCompany() {
        return this->company;
    }
    WorkExperience clone() {
        WorkExperience w1;
        w1.area = this->area;
        w1.company = this->company;
        return w1;
    }
};