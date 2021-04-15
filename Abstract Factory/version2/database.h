#pragma once

#include "sqluser.h"
#include "sqldepartment.h"
#include "oracleuser.h"
#include "oracledepartment.h"

#include <iostream>

class dataBase {
private:
    std::string db = "sql";
public:
    dataBase() = default;
    dataBase(std::string s) : db{s} {};
    IUser* u;
    Idepartment* d;
    void setDB(std::string s) {
        this->db = s;
    }
    IUser* createUser() {
        int d = 1;
        if (this->db == "sql") {
            d = 1;
        }
        if (this->db == "oracle") {
            d = 2;
        }
        switch (d) {
            case 1: u = new sqlUser(); break;
            case 2: u = new oracleUser(); break;
            default: u = new sqlUser(); break;
        }
        return u;
    }
    Idepartment* createDepartment() {
        int c = 1;
        if (this->db == "sql") {
            c = 1;
        }
        if (this->db == "oracle") {
            c = 2;
        }
        switch (c) {
            case 1: d = new SqlDepartment(); break;
            case 2: d = new OracleDepartment(); break;
            default: d = new SqlDepartment(); break;
        }
        return d;
    }
    ~dataBase(){
        delete d, u;
    }
};