#include<iostream>
using namespace std;

class Vehicle {
public:
    void display() {
        cout << "Vehicle have two type:- " << endl;
    }
};

class Engine {
public:
    void display() {
        cout << "Engine have two type:- " << endl;
    }
};

class Car : public Vehicle {
public:
    void display() {
        cout << "Car is the part of Vehical." << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void display() {
        cout << "Motorcycle is the part of Vehical." << endl;
    }
};

class ElectricEngine : public Engine {
public:
    void display() {
        cout << "Electric Engine is part of Engine" << endl;
    }
};

class GasEngine : public Engine {
public:
    void display() {
        cout << "Gas Engine is the part of Engine" << endl;
    }
};


int main() {
    Vehicle obj;    
    obj.display();
    obj.display();  //Ambiguity: which display() to call?
    obj.GasEngine::display();

    return 0;
}