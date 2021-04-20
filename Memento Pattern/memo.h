#pragma once

class Memo {
private:
    int vit;
    int atk;
    int def;
public:
    Memo() = default;
    Memo(int v, int a, int d) : vit{v}, atk{a}, def{d} {};
    int const getVitality() {
        return this->vit;
    }
    void setVitality(int v) {
        this->vit = v;
    }
    int const getAttack() {
        return this->atk;
    }
    void setAttack(int v) {
        this->atk = v;
    }
    int const getDefense() {
        return this->def;
    }
    void setDefense(int v) {
        this->def = v;
    }
};