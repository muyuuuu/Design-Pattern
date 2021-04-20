#pragma once

#include "memo.h"

class CareTaker {
private:
    Memo m;
public:
    void setMemo(Memo m_) {
        this->m = m_;
    }
    const Memo getMemo() {
        return this->m;
    }
};