// 4. Employee Management System: Implement a class named 'Employee' with overloaded methods to handle different types of employee information updates. For example, overload methods for adding new employees with varying sets of parameters such as name, ID, salary, and department.

#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    int eid;
    string department;
public: 
    Employee(string n , int e, string d): name(n) , eid(e) , department(d){}
    
    void info(){
        cout << "The type of employees " << endl; 
    }
};

class Manager : public Employee{
private:
    string que;
public:
    Manager(string q,string n , int e, string d) : que(q) , Employee(n,e,d){}


    void info(){
        
    }
};