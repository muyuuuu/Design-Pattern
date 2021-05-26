#include "express.h"

class Note: public Expression {
public:
    virtual void execute(std::string s) override {
        for (auto& i : s) {
            std::string n{""};
            switch (i) {
                case '1':
                    n = i + '0'; break;
                case '2':
                    n = i + '0'; break;
                case '3':
                    n = i + '0'; break;
                case '4':
                    n = i + '0'; break;
                // default:
                //     n = 'a'; break;
            }
            std::cout << n << " ";
        }
    }
};