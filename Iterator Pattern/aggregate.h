#pragma once

#include "iterator.h"
#include <vector>

template <typename T>
class Aggeregate {
public:
    virtual std::vector<T> CreateIterator() = 0;
};
