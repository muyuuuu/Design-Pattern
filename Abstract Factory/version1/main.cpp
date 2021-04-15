#include "user.h"
#include "sqlfactory.h"
#include "factory.h"
#include "sqlfactory.h"
#include "IUser.h"
#include "oraclefactory.h"
#include "Idepartment.h"
#include "department.h"

int main(){

    User u;
    u.setID(12);
    u.setName("lanling");

    IFactory* fac = new sqlFactory();

    // 返回 sql 用户表
    IUser* i = fac->createUser();

    i->Insert(u);
    i->getUser(12);

    Department d{"INNO"};

    fac = new OracleFactory();

    Idepartment* a = fac->createDepartment();
    a->Insert(d);
    a->getDepartment("INNO");

    delete fac;

    return 0;
}