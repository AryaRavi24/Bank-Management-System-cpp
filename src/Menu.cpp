#include<iostream>
#include<string>
#include<limits>
#include "../include/Menu.h"
#include "../include/Account.h"
#include "../include/App.h"

using namespace std;

int Menu::showMenu(){
    int choice;
    cout<<"1.Create New Account\n2.Login to Existing Accout\n3.Exit\n";
    cout<<"Enter your choice :";
    cin>>choice;

    return choice;
}

void Menu::waitForEnter(){
    cout<<"\nPress ENTER to go back...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

