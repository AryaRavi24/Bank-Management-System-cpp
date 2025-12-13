#include <iostream>
#include<limits>
#include "../include/Account.h"
#include "../include/App.h"
#include "../include/Menu.h"
using namespace std;

int Account::nextAccountNumber = 10000;

Account::Account() {
    accountNumber = nextAccountNumber++;
}

int Account::getAccountNumber()const{
    return accountNumber;
}

void Account::setHolderName(const string &name) {
    holderName = name;
}

void Account::setPhoneNumber(int number) {
    phoneNumber = number;
}

void Account::setPin(const int pin){
    pinNum = pin;
}

void Account::setBalance(double initialDeposit){
    balance = initialDeposit;
}

void Account::createAccount() {
    int number, pin;
    string name;
    double initialDeposit;

    cout << "\n============CREATE NEW ACCOUNT============\n";

    cout << "Enter full Name: ";
    getline(cin, name);

    cout << "Enter Phone Number: ";
    cin >> number;

    cout<<"Create 4 digit Pin :";
    cin>>pin;

    cout<<"Enter Initial Deposit :";
    cin>>initialDeposit;
    

    setHolderName(name);
    setPhoneNumber(number);
    setPin(pin);
    setBalance(initialDeposit);


    cout << "\nAccount created successfully!\n";
    cout<<"Your Account Number :"<<getAccountNumber();

}

string Account::getHolderName()const {return holderName;}
int Account::getPhoneNumber()const {return phoneNumber;}
int Account::getPinNumber()const {return pinNum;}
double Account::getBalance()const {return balance;}