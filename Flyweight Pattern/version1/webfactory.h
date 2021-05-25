#include <unordered_map>

#include "concreteweb.h"

class webFactory {
private:
    std::unordered_map <std::string, std::pair<int, concreteWebsite*>> m;
public:
    webSite* getWeb(std::string s) {
        if (m[s].first == 0) {
            m[s].first = 1;
            m[s].second = new concreteWebsite(s);
        }
        return m[s].second;
    }
    int const getWebSize() {
        return m.size();
    }
    ~webFactory() {
        for (auto i : m) {
            delete i.second.second;
        }
    }
};