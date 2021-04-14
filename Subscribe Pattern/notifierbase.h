#pragma once

#include "observerbase.h"

class notifierBase {
private:
    std::string s{"boss is back"};
public:
    virtual void Attach(observer* o) {};
    virtual void Detach(observer* o) {};
    virtual void notify() {};
    virtual void setState(std::string s) {};
    const virtual std::string getState() {
        return this->s;
    };
};