#pragma once

#include "memo.h"

#include <iostream>

class Originator {
private:
    int vit;
    int atk;
    int def;
public:
    Originator() = default;
    Originator(int v, int a, int d) : vit{v}, atk{a}, def{d} {};
    void recoveryState(Memo m) {
        this->vit = m.getVitality();
        this->atk = m.getAttack();
        this->def = m.getDefense();
    }
    Memo saveState(){
        Memo m{this->vit, this->atk, this->def};
        return m;
    }
    void stateDisplay() const {
        std::cout << "Vitality is " << this->vit << std::endl;
        std::cout << "Attack is " << this->atk << std::endl;
        std::cout << "Defense is " << this->def << std::endl;
    }
    void fight() {
        this->vit = 0;
        this->atk = 0;
        this->def = 0;
    }
};