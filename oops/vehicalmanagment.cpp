//9. Vehicle Management System:
//   Create a class hierarchy to represent vehicles such as cars, bikes, and trucks. Implement methods to calculate fuel efficiency, display vehicle details, and perform maintenance tasks.

#include<iostream>
using namespace std;

class Vehical{
private:
    int f_efficiency;
    string type;
public:
    Vehical(int f , string t) : f_efficiency(f), type(t){}

    void display(){
        cout << "The type of this Vehical is :- " << type << endl;
        cout << "The fuel efficiency of this vehical is :- " << f_efficiency << endl;
    }
};

class Car : public Vehical{
private:
    string name;
public:
    Car(int f , string t , string n) : Vehical(f,t) , name(n) {}

    void displayCar(){
        Vehical::display();
        cout << "The name of this car is:- " << name << endl; 
    }
};

class Bike : public Vehical{
private:
    string name;
public:
    Bike(int f , string t , string n) : Vehical(f,t) , name(n) {}

    void displayBike(){
        Vehical::display();
        cout << "The name of this bike is:- " << name << endl; 
    }
};

class Truck : public Vehical{
private:
    string name;
public:
    Truck(int f , string t , string n) : Vehical(f,t) , name(n) {}

    void displayCar(){
        Vehical::display();
        cout << "The name of this truck is:- " << name << endl; 
    }
};

int main(){
    
    Car obj1(20 , "Car" , "Swift");
    Bike obj2(34, "Bike" , "Ninja H2R");
    Truck obj3(25 , "Truck" , "BhartBenze");

    obj1.displayCar();
    obj2.displayBike();
    obj3.displayCar();
    return 0;
}