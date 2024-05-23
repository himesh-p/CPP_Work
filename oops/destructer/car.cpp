//1. Create a class representing a car. Implement a destructor that prints a message indicating the destruction of a car object.

#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
    string name;
    float price;
    int year;

    public:
    Car(string n , float p , int y){
        name = n;
        price = p;
        year = y;
        cout << "Constructer called....." << endl;
    }
    void display(){
        cout << "The name of car:- " << name << endl;
        cout << "The price of car:- " << price << endl;
        cout << "The model year of this car is:- " << year << endl;
    }
    ~Car(){
        cout << "Destructor called......" << endl;
        cout << "The details of this car name:- " << name << " , price:- " << price << " and model year:- " << year << " are destroyed." << endl;
    }
};

int main(){
    Car obj("Swift" , 20000 , 2022);

    obj.display();
    // for show details car to destroy really or not..............
    // Car *obj1 = new Car("swift" , 20000 , 2012);
    
    // delete obj1;

    // cout << "The Cars details before distruction:- " << endl;
    // obj1->display();
    return 0;
}