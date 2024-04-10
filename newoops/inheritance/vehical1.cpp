#include<iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {}
    
    void display() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
protected:
    int seats;
public:
    Car(string b, int s) : Vehicle(b), seats(s) {}

    void display(){
    cout << "Cars details:- " << endl;    
    Vehicle::display();
    cout << "Number of seats:- " << seats << endl;
    }
    
};

class MotorCycle: public Vehicle{
protected:
    float petrolcapacity;
public:
    MotorCycle(string b , float p): Vehicle(b) ,petrolcapacity(p) {}

    void display(){
    cout << "MotorCycle details:- " << endl;
    Vehicle::display();
    cout << "Number of petrolcapacity (in liters):- " << petrolcapacity << endl;
    }
};

class Truck: public Vehicle{
protected:
    float weidthcapacity;
public:
    Truck(string b , float w): Vehicle(b) ,weidthcapacity(w) {}

    void display(){
    cout << "Truck details:- " << endl;
    Vehicle::display();
    cout << "Value of weidthcapacity (int tuns):- " << weidthcapacity << endl;
    }
};


int main(){

    Car obj1("Wagoner" , 5);
    MotorCycle obj2("Activa 125" , 50);
    Truck obj3("Mahinda jeeto" , 100);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}