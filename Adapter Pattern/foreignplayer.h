#pragma once

#include <iostream>

class ForeignPlayer {
private:
    std::string name;
public:
    ForeignPlayer() = default;
    void setName(std::string s) {
        name = s;
    }
    void attackChinese() {
        std::cout << this->name << ", Attack" << std::endl;
    }
    void defenseChinese() {
        std::cout << this->name << ", Defense" << std::endl;
    }
};