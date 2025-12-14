#pragma once
#include <mysql/jdbc.h>
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