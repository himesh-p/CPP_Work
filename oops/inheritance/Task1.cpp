// 2. Employee Hierarchy:
//    Design a system to represent employees in an organization. Employees can be categorized based on their role (e.g., manager, worker) and their specialization (e.g., IT, finance). Utilize hybrid inheritance to model this hierarchy.


#include<iostream>
using namespace std;

class Employee{
public:
    void display(){
        cout << "Employee:- " << endl;
    }
};
class Manager : public Employee{
public:
    void display(){
        cout << "(1) Manager" << endl;
    }
};
class Worker : public Employee{
public:
    void display(){
        cout << "(2) Worker" << endl;
    }
};
class Specialization{
public:
    void display(){
        cout << "Specialization of the employee:- " << endl;
    }
};
class It : public Specialization{
public:
    void display(){
        cout << "Specialization :- It " << endl;
    }
};
class Finance : public Specialization{
public:
    void display(){
        cout << "Specialization :- Finance " << endl;
    }
};

int main(){
    Manager M;
    Worker W;
    It I;
    Finance F;
    M.Employee::display();
    M.display();
    W.display();
    I.Specialization::display();
    I.display();
    F.display();
    return 0;
}