#include<iostream>
#include"../include/App.h"
using namespace std;

int main(){
    
    Database db;
    db.connect();

    App app;
    app.runApp();

    return 0;
}