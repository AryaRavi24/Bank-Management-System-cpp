#include<iostream>
#include"../include/App.h"
#include "../include/Database.h"
using namespace std;

int main(){
    
    Database db;
    if (db.connect())
    {
        cout<<"Connection test passed.";
    }else
        cout<<"Connection test failed.";  

    App app;
    app.runApp();

    db.close();

    return 0;
}