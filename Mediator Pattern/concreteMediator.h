#include "concreteColleague.h"

// 需要了解所有的具体同事对象
class concreteMediator : public Mediator {
private:
    concreteColleague1* c1 = new concreteColleague1();
    concreteColleague2* c2 = new concreteColleague2();
public:
    void setCon1(concreteColleague1* c) {
        c1 = c;
    }
    void setCon2(concreteColleague2* c) {
        c2 = c;
    }
    virtual void send(std::string msg, Colleague* c) {
        if (c == c1) {
            c2->notify(msg);
        }
        else {
            c1->notify(msg);
        }
    }
    ~concreteMediator() {
        delete c1, c2;
    }
};