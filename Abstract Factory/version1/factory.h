#pragma once

#include "IUser.h"
#include "Idepartment.h"

class IFactory {
public:
    virtual IUser* createUser() = 0;
    virtual Idepartment* createDepartment() = 0;
};