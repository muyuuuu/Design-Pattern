#pragma once

#include <iostream>

class Person {
public:
    std::string sign{""};
    Person() = default;
    Person(std::string s) : sign{s} {};
    virtual void getConclusion() {};
    void setAction(std::string s){
        sign = s;
    }
};