//3. Animal Hierarchy: Implement a base class 'Animal' with virtual function 'makeSound()'. Derive classes 'Dog' and 'Cat' from 'Animal', each with its own implementation of 'makeSound()'. Write a program to demonstrate polymorphism by making various animals (instances of 'Dog' and 'Cat') produce their respective sounds.

#include<iostream>
using namespace std;


class Animal{
public:
    virtual void makeSound();
};

class Dog : public Animal{
public:
    void makeSound() override{
        cout << "The sound of dog is 'Bou Bou'." << endl;
    }
};

class Cat : public Animal{
public:
    void makeSound() override{
        cout << "The sound of cat is 'Mou Mou'." << endl;
    }
};

int main(){

    Animal *obj;
    Dog d;
    Cat c;
    obj = &d;
    obj->makeSound();
    obj = &c;
    obj->makeSound();
    return 0;
}
