//1. Create a class named "Employee" with data members for employee ID, name, and salary. Include a method to input employee details and another method to display those details.
#include<iostream>
using namespace std;

class Employees{
     int emp_id;
     string name;
     float salary;

      public:
      void scan(){
        cout << "\nEnter the employees id:- ";
        cin >> emp_id;

        cout << "\nEnter the name of employees:-  ";
        cin.ignore();
        getline(cin,name);

        cout << "\nEnter the salary of the employees:-  ";
        cin >> salary;
     }
    
     void display(){
        cout << "\nEmployee's Id= " << emp_id;
        cout << "\nEmployee's name= " << name;
        cout << "\nEmployee's salary= " << salary;
     }   
};

int main(){
    Employees e;
    e.scan();
    e.display();
}
 


