#pragma once

#include "player.h"
#include <iostream>

class forwards : public Player {
private:
    std::string name;
public:
    forwards() = default;
    forwards(std::string s) : name{s} {};
    virtual void attack() override {
        std::cout << this->name << ", Attack" << std::endl;
    }
    virtual void defense() override {
        std::cout << this->name << ", Defense" << std::endl;
    }
};

class center : public Player {
private:
    std::string name;
public:
    center() = default;
    center(std::string s) : name{s} {};
    virtual void attack() override {
        std::cout << this->name << ", Attack" << std::endl;
    }
    virtual void defense() override {
        std::cout << this->name << ", Defense" << std::endl;
    }
};