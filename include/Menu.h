#include<iostream>
using namespace std;

#ifndef MENU_H
#define MENU_H


class Menu
{
private:
    // int menuChoice;
    /* data */
public:
    Menu(/* args */){
        cout<<"=========================================\n";
        cout<<"       BANK MANAGEMENT SYSTEM            \n";
        cout<<"=========================================\n";
    }
    
    int showMenu();
    int showUserMainMenu();

    void waitForEnter();

};

#endif