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
        cin >> name;

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
 


