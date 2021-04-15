#pragma once

#include "factory.h"
#include "IUser.h"
#include"Idepartment.h"
#include "sqluser.h"
#include "sqldepartment.h"

class sqlFactory : public IFactory {
public:
    virtual IUser* createUser() override {
        return new sqlUser;
    }
    virtual Idepartment* createDepartment() override {
        return new SqlDepartment;
    }
};