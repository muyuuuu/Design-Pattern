#pragma once

#include "command.h"
#include <iostream>


class Waiter {
private:
    Command* c;
public:
    void setOrder(Command* c_) {
        // 不是野指针
        this->c = c_;
        std::cout << this->c << std::endl;
    }
    void notify() {
        this->c->executeCommand();
    }
};