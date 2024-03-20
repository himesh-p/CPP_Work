#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int Roll_No;
    int age;

    Student(string n,int r,int a){
        name = n;
        Roll_No = r;
        age = a;
    }
     void display(){
        cout << "The name the student :- " << name << endl;
        cout << "The Roll no of the student :- " << Roll_No << endl;
        cout << "The age of the student :- " << age << endl;
     }
};

int main(){
    string n;
    int r;
    int a;
     cout << "Enter the student name:- " << endl;
        // cin.ignore();
        getline(cin,n);
        cout << "Enter the roll no:-  " << endl;
        cin >> r;
        cout << "Enter the age:- " << endl;
        cin >> a;
    Student s(n,r,a);
    s.display();
}
