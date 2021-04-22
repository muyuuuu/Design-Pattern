#pragma once

#include "concreteagg.h"

#include <iostream>

template <typename T>
class concreteIt : public Iterator<T> {
private:
    int cnt{0};
    concreteAggregate<T> a;
public:
    concreteIt() = default;
    concreteIt(concreteAggregate<T> a_) : a{a_} {};
    virtual T first() override {
        return a.getItem(0);
    }
    virtual T next() override {
        cnt++;
        return a.getItem(cnt);
    }
    virtual bool isDone() override {
        // 索引和数量差 1
        return cnt + 1 > a.getCount() ? true : false;
    }
    virtual T current() override {
        return a.getItem(cnt);
    }
};