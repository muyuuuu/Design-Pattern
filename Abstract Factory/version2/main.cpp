#include "user.h"
#include "IUser.h"
#include "Idepartment.h"
#include "department.h"
#include "database.h"

int main(){

    User u;
    u.setID(12);
    u.setName("lanling");

    dataBase db{"oracle"};
    IUser* i = db.createUser();
    i->Insert(u);
    i->getUser(12);

    db.setDB("sql");

    Department d{"INNO"};
    Idepartment* de = db.createDepartment();
    de->Insert(d);
    de->getDepartment("INNO");

    delete i, de;
    return 0;
}