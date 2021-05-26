#include "context.h"

class Expression {
private:
    std::string s {""};
public:
    void interpret (playContext* p) {
        if (p->getText().size() == 0)
            return;
        else {
            // 通用的解释
            s = p->getText() + "...";
        }
        // 解释后执行
        execute(s);
    }
    virtual void execute(std::string s) {};
};