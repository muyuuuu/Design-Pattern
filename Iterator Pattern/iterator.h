#pragma once

template <typename T>
class Iterator {
public:
    virtual T first() = 0;
    virtual T next() = 0;
    virtual bool isDone() = 0;
    virtual T current() = 0;
};