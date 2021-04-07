#pragma once

#include "factory.h"
#include "base.h"
#include "undergraduate.h"

class underGraduateFactory : public IFactory {
public:
    virtual Base* create() override {
        return new UnderGraduate();
    }
};