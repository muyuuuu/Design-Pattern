#pragma once

#include "aggregate.h"

template <typename T>
class concreteAggregate : public Aggeregate<T> {
private:
    std::vector<T> v;
public:
    concreteAggregate() {};
    virtual std::vector<T> CreateIterator() override {
        return this->v;
    }
    const int getCount() {
        return this->v.size();
    }
    void setItem(T val) {
        this->v.push_back(val);
    }
    T getItem(int idx) {
        if (0 <= idx && idx <= this->getCount());
        else {
            idx = 0;
        }
        return this->v[idx];
    }
};