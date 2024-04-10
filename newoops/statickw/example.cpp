#include<iostream>
using namespace std;

class Account {
public:
    int accno;
    string name;
    static float rateOfInterest;
    static int count;

    Account(int accno, string name) {
        this->accno = accno;
        this->name = name;
        count++;
    }

    void display() {
        cout << accno << " " << name << " " << rateOfInterest << endl;
    }
};

float Account::rateOfInterest = 6.5;  //:: -> scope resolution operator
int Account::count = 0;

int main() {
    Account a1(101, "Himesh");
    Account a2(204, "Kathan");
    Account a3(304, "Meet");

    // a1.rateOfInterest = 2.3;
   Account::rateOfInterest = 2.3;  //compile time memory allocation
    a1.display();
    a2.display();
    a3.display();

    cout << Account::count;

    return 0;
}