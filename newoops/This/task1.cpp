#include<iostream>
using namespace std;

class Bank {
    int account_no;
    string name;
    float balance;

    public:
    Bank(int account_no , string name , float balance){
        this->account_no = account_no;
        this->name = name;
        this->balance = balance;
    }
    void display(){
        cout << "\n\n";
        cout << "\nAccount number = " << account_no;
        cout << "\nName = " << name;
        cout << "\nBank Balance = " << balance;
        cout << "\n\n";
    }
    void dw(float w, float d){
        cout << "\nEnter the money if you want to withdraw:- ";
        cin >> w;
        if(w>balance){
            cout << "\nYour balaance is less than your widthdraw amount.";
            w=0;
        }
        cout << "\nEnter the money if you want to deposit:- ";
        cin >> d;
        balance = balance - w + d;
        cout << "\n\n\nThe new bank balance is :- " << balance;
    }
};

int main(){
    int a,c;
    Bank b(12 , "Himesh Patel" , 20000);
    b.display();
    b.dw(a,c);
}