#pragma once

#include "user.h"

class IUser {
public:
    virtual void Insert(User u) {};
    const virtual void getUser(int i) {};
};