#include<iostream>
#include<limits>
#include "../include/App.h"
#include "../include/Menu.h"
#include "../include/Account.h"
using namespace std;

void App::runApp(/* args */)
{
    while (true)
    {
        int menuChoice  =  menu.showMenu();
        if(menuChoice == 1){
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            account.createAccount();
            menu.waitForEnter();

        }   

        else if(menuChoice == 2){
            cout<<"\nLogin menu loaded";
            menu.waitForEnter();
        }
        else if(menuChoice == 3){
            cout<<"\n Exiting.....\n";
            break;
        }
        else{
            cout<<"\nInvalid Choice!";
            menu.waitForEnter();
        }
    }      

}