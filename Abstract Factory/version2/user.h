#pragma once

#include <iostream>

class User {
private:
    int id;
    std::string name;
public:
    User() = default; 
    User(int i, std::string s) : id{i}, name{s} {} ;
    const void setID(int i) {
        this->id = i;
    }
    const void setName(std::string s) {
        this->name = s;
    }
    int getIdD() {
        return this->id;
    }
    std::string getName() {
        return this->name;
    }
};