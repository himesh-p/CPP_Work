//4. Animal Inheritance: Build a system to model different animals using inheritance. Design a base class 'Animal' with derived classes like 'Mammal', 'Bird', and 'Reptile'. Each derived class should inherit common traits from the base class while also possessing distinct characteristics inherent to their category.

#include<iostream>
using namespace std;

class Animal{
protected:
    string type;
public:
    Animal(string t): type(t){}
    void displayAnimal(){
        cout << "The type of the animal is:- " << type << endl; 
    }
};

class Mammel : public Animal {
protected:
    string name;
public:
    Mammel(string t, string n) : Animal(t) , name(n){}
    void displayMammel(){
        cout << "The name of this type of animal is :- " << name << endl;
    }
};

class Cow : public Mammel {
protected:
    float milkCapacity;
public:
    Cow(string t , string n , float m) : Mammel(t,n) , milkCapacity(m){}
    void displayCow(){
        cout << "The milk Capacity of the cow is (in liters):- " << milkCapacity << endl;
    }
};



int main(){
    Cow obj("Mammel" , "Cow" , 6);
    obj.displayAnimal();
    obj.displayMammel();
    obj.displayCow();
    return 0;
}