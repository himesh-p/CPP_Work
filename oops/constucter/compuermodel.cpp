//10. Create a class to represent a computer with member variables for brand, model, and price. Write a constructor that initializes these variables when an object of the class is instantiated.

#include<iostream>
using namespace std;

class Computer{
private:
    string brand;
    string model;
    float price;
public:
    Computer(string b, string m, float p){
        brand = b;
        model = m;
        price = p;
    }
    void display(){
        cout << endl << "The Brand of this computer is:- " << brand << endl ;
        cout << "The Model of this computer is:- " << model << endl ;
        cout << "The Price of this computer is:- " << price << endl ;
    }
};
int main(){

    Computer c("Dell","S2722QC", 39999);
    c.display();
    return 0;
}