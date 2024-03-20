#include<iostream>
using namespace std;

class Bank{
    public:
    int account_no;
    float balance;
    string name;

    Bank(){
        account_no = 0;
        balance = 0.0;
        name = "";
    }
    void scan(){
        cout << "\nEnter the account number:-  " ;
        cin >> account_no;
        cout << "\nEnter the bank balance:-  ";
        cin >> balance;
        cout << "\nEnter the holder's name:-  ";
        cin.ignore();
        getline(cin,name);
    }

    void display(){
        cout << "\n\n";
        cout << "\nAccount number = " << account_no;
        cout << "\nBank Balance = " << balance;
        cout << "\nName = " << name;
        cout << "\n\n";
    }
};

int main(){
    Bank b;
    b.scan();
    b.display();
}