#include<iostream>
using namespace std;

class Animal{
protected:
    string types;
    string name;
public:
    Animal(string t , string n): types(t), name(n) {}

    void display(){
        cout << "Types of Animal:-  " << types  << " and name of the animal is:- "<< endl;
    }
};

class Mammel: public Animal{
protected:
    int milkstore;

public:
    Mammel(string t , string n , int m): Animal(t,n), milkstore(m){}

    void display(){
        cout << "Mammel Details:- " << endl;
        Animal::display();
        cout << "Name:- " << name << endl << "Milke store capacity (in liters):- " << milkstore << endl;
    }
};

class Birds: public Animal{
protected:
    int fly_cap ;

public:
    Birds(string t , string n , int f): Animal(t,n) , fly_cap(f) {}

    void display(){
        cout << "Birds Details:- " << endl;
        Animal::display();
        cout << "Name:- " << name << endl << "Fling capacity (points out of 100) of the bird:- " << fly_cap << endl;
    }
};

class Reptile: public Animal{
protected:
    string features;

public:
    Reptile(string t , string n , string f): Animal(t,n) , features(f){}

    void display(){
        cout << "Reptile Details:- " << endl;
        Animal::display();
        cout << "Name:- " << name << endl << "Other features are:- " << features << endl;
    }
};
int main(){
    
    Mammel obj1("mammel" , "Cow" , 13);
    Birds obj2("Birds" , "Eagel" , 95);
    Reptile obj3("Reptile" , "Cow" , "Swim in water and walk in soil");
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}