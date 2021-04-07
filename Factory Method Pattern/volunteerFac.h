#pragma once

#include "factory.h"
#include "base.h"
#include "volunteer.h"

class volunteerFactory : public IFactory {
public:
    virtual Base* create() override {
        return new Volunteer();
    }
};