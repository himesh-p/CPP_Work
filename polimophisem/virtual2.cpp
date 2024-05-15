//5. Vehicle Hierarchy: Develop a base class 'Vehicle' with virtual function 'start()'. Derive classes 'Car' and 'Bike' from 'Vehicle', each with its own implementation of 'start()'. Write a program to demonstrate polymorphism by starting various vehicles (instances of 'Car' and 'Bike') and observing their behavior.
#include<iostream>
using namespace std;


class Vehical{
public:
    virtual void start(){}
};

class Car : public Vehical{
public:
    void start() override{
        cout << "The car is start." << endl;
    }
};

class Bike : public Vehical{
public:
    void start() override{
        cout << "The Bike is start." << endl;
    }
};
int main(){

    Vehical *obj;
    Car c;
    obj = &c;
    obj->start();
    Bike b;
    obj = &b;
    obj->start();
    return 0;
}