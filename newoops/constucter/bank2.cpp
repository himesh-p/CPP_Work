#include<iostream>
using namespace std;

class Bank{
    public:
    int account_no;
    string name;
    float balance;

    Bank(int a,float ba,string n){
        account_no = a;
        balance = ba;
        name = n;
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
    int a;
    float ba;
    string n;
    cout << "\nEnter the account number:-  " ;
        cin >> a;
        cout << "\nEnter the bank balance:-  ";
        cin >> ba;
        cout << "\nEnter the holder's name:-  ";
        cin.ignore();
        getline(cin,n);
    Bank b(a,ba,n);
    b.display();
}