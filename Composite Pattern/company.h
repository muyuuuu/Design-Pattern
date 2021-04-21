#pragma once

class Company {
public:
    virtual void Add(Company* c) {};
    virtual void Remove(Company* c) {};
    virtual void Display(int depth) {};
    virtual void Duty() {};
};