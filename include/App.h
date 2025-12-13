#ifndef APP_H
#define APP_H

#include "../include/Menu.h"
#include "../include/Account.h"

class App
{
    bool isLogged;
    Menu menu;
    Account account;

public:
    void runApp();
};

#endif
