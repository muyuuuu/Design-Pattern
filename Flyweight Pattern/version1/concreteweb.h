#include "web.h"

#include <iostream>

class concreteWebsite : public webSite {
private:
    std::string name {""};
public:
    concreteWebsite() = default;
    concreteWebsite(std::string s_) : name{s_} {};
    void Use() override {
        std::cout << name << " is using." << std::endl;
    }
};