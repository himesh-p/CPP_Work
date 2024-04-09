#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int Roll_No;
    int age;
    public:
    Student(string n,int r,int a){
        name = n;
        Roll_No = r;
        age = a;
        cout << "Constructer called...." << endl;
    }
    void display(){
        cout << "The name the student :- " << name << endl;
        cout << "The Roll no of the student :- " << Roll_No << endl;
        cout << "The age of the student :- " << age << endl;
    }
    ~Student(){
        cout << "Destructor called......" << endl;
        cout << "The details of this student name:- " << name << " , Roll No:- " << Roll_No << " and age:- " << age << " are destroyed.";
    }
};

int main(){
    Student s1("Himesh" , 23 , 18);
    cout << endl << "The Students details before destruction:- " << endl;
    s1.display();
    
    return 0;
}