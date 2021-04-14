#pragma once

#include "notifierbase.h"
#include <iostream>

class observer {
public:
    const virtual void update() {};
};