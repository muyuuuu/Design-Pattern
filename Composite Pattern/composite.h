#pragma once

#include "company.h"

#include <iostream>
#include <list>

class CompoSite : public Company {
private:
    std::string name;
    std::list<Company*> v;
public:
    CompoSite() = default;
    CompoSite(std::string s_) : name{s_} {};
    virtual void Add(Company* c) override {
        v.push_back(c);
    }
    virtual void Remove(Company* c) override {
        v.remove(c);
    }
    virtual void Display(int depth) override {
        std::string s {""};
        s.assign(depth, '-');
        std::cout << s << this->name << std::endl;
        auto it = v.begin();
        for (; it != v.end(); it++){
            (*it)->Display(depth + 2);
        }
    }
    virtual void Duty() override {
        auto it = v.begin();
        for (; it != v.end(); it++){
            (*it)->Duty();
        }
    }
};