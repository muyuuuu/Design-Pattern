#pragma once

#include "composite.h"

class HR : public Company {
private:
    std::string name;
public:
    HR() = default;
    HR(std::string s_) : name{s_} {};
    virtual void Display(int depth) override {
        std::string s {""};
        s.assign(depth, '-');
        std::cout << s;
        std::cout << this->name << std::endl;
    };
    virtual void Duty() {
        std::cout << this->name << " HR duty" << std::endl;
    };
};

class Finary : public Company {
private:
    std::string name;
public:
    Finary() = default;
    Finary(std::string s_) : name{s_} {};
    virtual void Display(int depth) override {
        std::string s {""};
        s.assign(depth, '-');
        std::cout << s;
        std::cout << this->name << std::endl;
    };
    virtual void Duty() {
        std::cout << this->name << " Finary duty" << std::endl;
    };
};