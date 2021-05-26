#include <iostream>

class playContext {
private:
    std::string text{""};
public:
    playContext() = default;
    playContext(std::string s) : text{s} {};
    void setText(std::string s) {
        text = s;
    }
    std::string getText() {
        return text;
    }
};