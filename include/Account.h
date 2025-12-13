#pragma once
#include <string>
using namespace std;

class Account{
public:

private:
    static int nextAccountNumber;;
    string holderName;
    int phoneNumber = 0;
    double balance = 0.0;
    int accountNumber;
    int pinNum = 0;


public:
    Account();
    void createAccount();

    //setters
    void setHolderName(const string &name);
    void setPhoneNumber(const int number);
    void setPin(int pin);
    void setBalance(double initialDeposit);

    //Getters
    string getHolderName() const;
    int getPhoneNumber() const;
    int getPinNumber() const;
    double getBalance() const;
    int getAccountNumber() const;


   
};
