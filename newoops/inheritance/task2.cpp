//Develop a program to represent various animals and their characteristics. Animals can be categorized based on their species (e.g., mammal, bird) and their habitat (e.g., land, aquatic). Implement the system using hybrid inheritance.

#include<iostream>
using namespace std;

class Animal{
public:
    void display(){
        cout << "Types of the Animal :- " << endl;
    }
};
class Mammel : public Animal{
public:
    void display(){
        cout << "(1) Mammel" << endl;
    }
};
class Bird : public Animal{
public:
    void display(){
        cout << "(2) Bird" << endl;
    }
};
class Habbit{
public:
    void display(){
        cout << "Habbit of the Animal:- " << endl;
    }
};
class Land : public Habbit{
public:
    void display(){
        cout << "Habbit :- Land " << endl;
    }
};
class Aqutic : public Habbit{
public:
    void display(){
        cout << "Habbit :- Aqutic " << endl;
    }
};

int main(){
    Mammel M;
    Bird B;
    Land L;
    Aqutic A;
    M.Animal::display();
    M.display();
    B.display();
    L.Habbit::display();
    L.display();
    A.display();
    return 0;
}