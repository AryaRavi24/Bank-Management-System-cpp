#pragma once
#include <jdbc/mysql_driver.h>
#include <jdbc/mysql_connection.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/statement.h>
#include<string>

class Database {
    private:
        sql::Connection* conn;

    public:
        Database();
        bool connect();
        sql::Connection* getConnection();
        void close();

};