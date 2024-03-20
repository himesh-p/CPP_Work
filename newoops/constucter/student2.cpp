#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int Roll_No;
    int age;

    Student(){
        name = "";
        Roll_No = 0;
        age = 0;
    }
     void scan(){
        cout << "Enter the student name:- " << endl;
        // cin.ignore();
        getline(cin,name);
        cout << "Enter the roll no:-  " << endl;
        cin >> Roll_No;
        cout << "Enter the age:- " << endl;
        cin >> age;
     }
     void display(){
        cout << "The name the student :- " << name << endl;
        cout << "The Roll no of the student :- " << Roll_No << endl;
        cout << "The age of the student :- " << age << endl;
     }
};

int main(){
    Student s;
    s.scan();
    s.display();
}
