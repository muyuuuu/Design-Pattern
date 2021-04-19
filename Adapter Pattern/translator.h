#pragma once

#include "player.h"
#include "foreignplayer.h"

class Translator : public Player {
private:
    ForeignPlayer p;
    std::string name;
public:
    Translator() = default;
    Translator(std::string s) {
        p.setName(s);
    };
    virtual void attack() override {
        p.attackChinese();
    }
    virtual void defense() override {
        p.defenseChinese();
    }
};