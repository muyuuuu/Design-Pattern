#include <iostream>

class User {
private:
    std::string name {""};
public:
    User() = default;
    User(std::string s) : name{s} {};
    std::string const getName() {
        return name;
    } 
};