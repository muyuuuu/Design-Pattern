#pragma once

#include "IUser.h"
#include "user.h"

#include <iostream>

class sqlUser : public IUser{
public:
    virtual void Insert(User u) override {
        std::cout << "SQL insert User" << std::endl;
    }
    const virtual void getUser(int i) override {
        std::cout << "SQL select User: " << i << std::endl;
    }
};