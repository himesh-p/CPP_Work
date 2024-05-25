//5. Electronic Devices:
//    Design a system to represent electronic devices such as smartphones, tablets, and laptops. Devices can be categorized based on their type (e.g., mobile, computer) and their power source (e.g., battery, electricity). Implement the system using hybrid inheritance to manage the complexity of the hierarchy.

#include<iostream>
using namespace std;

class ElectronicDevice{
public:
    void display(){
        cout << "The Electronic Device is have many types:- " << endl;
    }
};

class Mobile: public ElectronicDevice{
public:
    void display(){
        cout << "The mobile is type of Electronic Device." << endl;
    }
};

class Computer : public ElectronicDevice{
public:
    void display(){
        cout << "The Computer is type of Electronic Device." << endl;
    }
};

class Attributes{
public:
    void display(){
        cout << "The Attributes of this Device is:- " << endl;
    }
};

class Battery : public Attributes{
public:
    void display(){
        cout << "The Battery is the most importabt attribute in mobile and Computer." << endl;
    }
};

class Electricity : public Attributes{
public:
    void display(){
        cout << "The Electricity is the  attribute in mobile and Computer." << endl;
    }
};
int main(){
    Mobile M;
    Computer C;
    Battery B;
    Electricity E;
    M.ElectronicDevice::display();
    M.display();
    C.display();
    B.Attributes::display();
    B.display();
    E.display();
    return 0;
}
