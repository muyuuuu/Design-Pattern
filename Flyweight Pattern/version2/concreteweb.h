#include "web.h"

class concreteWebsite : public webSite {
private:
    std::string name {""};
public:
    concreteWebsite() = default;
    concreteWebsite(std::string s_) : name{s_} {};
    void Use(User u) override {
        std::cout << u.getName() << " is using " << name << std::endl;
    }
};