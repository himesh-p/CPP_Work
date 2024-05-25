//3. "Design a 'Bank' class to represent a bank's financials. Use a static member variable 'totalAssets' to keep track of the sum of all customer account balances, and update it automatically every time a new account is created or an existing account balance changes."

#include<iostream>
#include<iomanip>
using namespace std;

class BankAccount{
private:
    int account_num;
    double balance;
    int  count;
    double totalAsset;
public:
    BankAccount(int a , double b){}
};