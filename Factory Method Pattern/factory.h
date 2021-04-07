#pragma once

#include "base.h"

class IFactory {
public:
    virtual Base* create() = 0;
};