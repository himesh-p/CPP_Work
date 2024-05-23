//10. Create a class to model a student enrollment system with dynamic storage for course registrations. Implement a copy constructor to support duplicating student enrollment records for academic audits and analysis.

#include<iostream>
using namespace std;

class Student {
    private:
    string name;
    string date;
    string cource;

    public:
   Student(string n, string d, string c) {
        name = n;
        date = d;
        cource = c;
    }

   Student(Student& i) {
        name = i.name;
        date = i.date;
        cource = i.cource;
    }

    void display() {
        cout << "\nname of student:-  " << name << endl;
        cout << "Date of addmision:- : " << date << endl;
        cout << "Cource of the Student:-  " << cource << endl;
    }
};

int main() {
   
   Student n("Himesh Patel", "03/08/2023", "Computer Engineering");

   Student m(n);

    n.display();
    m.display();

    return 0;
}