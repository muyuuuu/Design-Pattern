#pragma once

#include "factory.h"
#include "IUser.h"
#include "oracleuser.h"
#include "oracledepartment.h"

class OracleFactory : public IFactory {
public:
    virtual IUser* createUser() override {
        return new oracleUser;
    }
    virtual Idepartment* createDepartment() override {
        return new OracleDepartment;
    }
};