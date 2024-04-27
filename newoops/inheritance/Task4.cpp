//Create a system to classify vehicles into different categories based on their type (e.g., car, motorcycle) and their engine type (e.g., electric, gas). Use hybrid inheritance to model this system effectively.

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
    Car C; 
    Motorcycle M;
    ElectricEngine E;
    GasEngine G;   
    C.Vehicle::display();  //Ambiguity: which display() to call?
    C.display();
    M.display();
    E.Engine::display();
    E.display();
    G.display();
    // Motorcycle::display();

    return 0;
}