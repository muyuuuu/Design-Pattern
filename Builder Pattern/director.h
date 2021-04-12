#pragma once

#include "person.h"

class personDirector {
private:
    Person* p = new Person();
public:
    personDirector() = default;
    personDirector(Person* h_){
        this->p = h_;
    }
    void createPerson(int weight) {
        this->p->buildBody(weight);
    }
    ~personDirector(){
        delete p;
    }
};