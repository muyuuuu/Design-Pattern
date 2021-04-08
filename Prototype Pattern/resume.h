#pragma once

#include "workExper.h"

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Resume {
private:
    string name;
    string age;
    string gender;
    WorkExperience w;
public:
    Resume() = default;
    Resume(string n, string a, string g) :
        name{n}, age{a}, gender{g} {};
    void setExper(string a, string c) {
        this->w.setArea(a);
        this->w.setCompany(c);
    }
    const void show() {
        cout << this->name << ", " << this->gender << ", " << this->age << " years old, ";
        cout << this->w.getArea() << ", " << this->w.getCompany() << endl;
    }
    Resume clone() {
        // 深拷贝
        this->w = w.clone();
        return *this;
        // 浅拷贝
        // return *this;
    }
    ~Resume() {
        // delete w;
    }
};
