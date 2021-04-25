#pragma once

#include "brand.h"

class BrandN : public Brand {
private:
    SoftWare* s = new SoftWare();
public:
    BrandN() {}
    virtual void setSoftware(SoftWare* s_) override {
        this->s = s_;
    }
    virtual void run() override {
        std::cout << "N: ";
        this->s->run();
    }
    ~BrandN() {
        delete this->s;
    }
};

class BrandM : public Brand {
private:
    SoftWare* s = new SoftWare();
public:
    BrandM() {}
    virtual void setSoftware(SoftWare* s_) override {
        this->s = s_;
    }
    virtual void run() override {
        std::cout << "M: ";
        this->s->run();
    }
    ~BrandM() {
        delete this->s;
    }
};