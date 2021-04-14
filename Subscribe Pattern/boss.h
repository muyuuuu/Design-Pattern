#pragma once

#include "notifierbase.h"
#include "observerbase.h"

#include <list>
#include <vector>

class boss : public notifierBase {
private:
    std::list<observer*> v;
    std::string state;
public:
    virtual void Attach(observer* o) override {
        this->v.push_back(o);
    }
    virtual void Detach(observer* o) override {
        this->v.remove(o);
    }
    virtual void notify() override {
        auto p = this->v.begin();
        for(; p != v.end(); p++){
            // 二级指针
            (*p)->update();
        }
    }
    virtual void setState(std::string s) override {
        this->state = s;
    }
    const virtual std::string getState() override {
        return this->state;
    }
};