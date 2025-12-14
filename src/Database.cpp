#include "../include/Database.h"
#include <iostream>
using namespace std;

Database::Database(){
    conn = nullptr;
}

bool Database::connect(){
    try
    {
        sql::Driver* driver;
        driver = get_driver_instance();

        conn = driver->connect(
            "tcp://127.0.0.1:3306",
            "root",
            "arya"
        );

        conn->setSchema("bank_db");
        cout<<"MySQL Connected Successfully!\n";
        return true;

    }
    catch(sql::SQLException& e)
    {
        cout<<"MySQL Connection Failed\n";
        cout<<e.what() << endl;
        return false;
    }
    
}


sql::Connection* Database::getConnection(){
    return conn;
}

void Database::close(){
    if(conn){
        conn->close();
        delete conn;
    }
}