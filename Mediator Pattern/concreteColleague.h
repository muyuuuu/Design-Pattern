#include "colleague.h"

class concreteColleague1 : public Colleague {
public:
private:
    Mediator* m = new Mediator();
public:
    concreteColleague1() = default;
    concreteColleague1(Mediator* m1) : m{m1} {};
    virtual void send(std::string msg) override {
        this->m->send(msg, this);
    }
    virtual void notify(std::string msg) override {
        std::cout << "Member 1 get message: " << msg << std::endl;
    }
    ~concreteColleague1() {
        delete m;
    }
};

class concreteColleague2 : public Colleague {
public:
private:
    Mediator* m = new Mediator();
public:
    concreteColleague2() = default;
    concreteColleague2(Mediator* m1) : m{m1} {};
    virtual void send(std::string msg) override {
        this->m->send(msg, this);
    }
    virtual void notify(std::string msg) override {
        std::cout << "Member 2 get message: " << msg << std::endl;
    }
    ~concreteColleague2() {
        delete m;
    }
};