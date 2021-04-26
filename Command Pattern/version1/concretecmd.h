#pragma once

#include "barbecuer.h"
#include "command.h"

class BakeMuttonCmd : public Command {
private:
    Barbecuer b;
public:
    BakeMuttonCmd() = default;
    BakeMuttonCmd(Barbecuer b_) {
        this->b = b_;
    }
    virtual void executeCommand() override {
        b.BakeMutton();
    }
};

class BakeChickenCmd : public Command {
private:
    Barbecuer b;
public:    
    BakeChickenCmd() = default;
    BakeChickenCmd(Barbecuer b_) {
        this->b = b_;
    }
    virtual void executeCommand() override {
        b.BakeChicken();
    }
};