#include<iostream>
using namespace std;

class Parants{
private:
    string car;
public:
    Parants(string c): car(c){}

    void display(){
        cout << "My father have a car this name is:- " << car << endl;
    }
};

class Child : public Parants{
public:
    Child(string c): Parants(c){}
};

int main(){

    Child obj1("Swift");

    obj1.display();
    return 0;
}