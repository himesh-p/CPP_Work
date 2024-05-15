//4. Bank Account Hierarchy: Create a base class 'Account' with virtual functions 'deposit()' and 'withdraw()'. Derive classes 'SavingsAccount' and 'CheckingAccount' from 'Account', each with its own implementation of 'deposit()' and 'withdraw()'. Write a program to simulate banking transactions such as depositing and withdrawing money from both savings and checking accounts.

#include<iostream>
using namespace std;

class Account{
protected:
    float balance;
public:
    Account(){
        balance = 1000;
    }
    int getBalance(){
        return balance;
    }
    virtual void deposit(float){
        
    }
    virtual void withdraw(){

    }
};

class SavingAccount : public Account{
private:
    float with;
    float depo;
public:
    void deposit(float with) override{
        float total = Account::getBalance() + depo;
        cout << "The total balace after deposite is :- " << total; 
    }

};
int main(){
    Account *obj;
    SavingAccount s;
    obj = &s;
    obj->deposit(200);
    return 0;
}

