#pragma once

#include "IUser.h"
#include "user.h"

#include <iostream>

class oracleUser : public IUser{
public:
    virtual void Insert(User u) override {
        std::cout << "Oracle insert" << std::endl;
    }
    const virtual void getUser(int i) override {
        std::cout << "Oracle select " << i << std::endl;
    }
};