#include<iostream>
using namespace std;

class Car {
private:
    string name;
    string model;
    int year;
public:
    Car(){
        name = "";
        model = "";
        year = 0;
    }
    void scan(){
        cout << "Enter the name of car:- " << endl;
        // cin.ignore();
        getline(cin,name);
        cout << "Enter the model of the car:- " << endl;
        // cin.ignore();
        getline(cin,model);
        cout << "Enter the model year of the car:- " << endl;
        cin >> year;
    }
    void display(){
        cout << "Name:- " << name << endl;
        cout << "Model:- " << model << endl;
        cout << "Year:- " << year << endl;
    }
};


int main(){
    Car c;
    c.scan();
    c.display();
    return 0;
}