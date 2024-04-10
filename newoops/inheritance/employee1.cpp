#include<iostream>
using namespace std;

class Employee {
protected:
    string name;
    int employeeID;
public:
    Employee(string n, int id) : name(n), employeeID(id) {}

    void display() {
        cout << "Name: " << name << ", EmployeeID: " << employeeID;
    }
};

class Manager: public Employee {
private:
    string department;
public:
    Manager(string n, int id, string dept) : Employee(n, id), department(dept) {}

    void display() {
        cout << "Manager - ";
        Employee::display();    
        cout << ", Department: " << department << endl;
    }
};

class Engineer : public Employee {
private:
    string specialization;
public:
    Engineer(string n, int id, string spec) : Employee(n, id), specialization(spec) {}

    void display() {
        cout << "Engineer - ";
        Employee::display();
        cout << ", Specialization: " << specialization << endl;
    }
};

class Clerk : public Employee {
private:
    string qulification;
public:
    Clerk(string n, int id, string spec) : Employee(n, id), qulification(spec) {}

    void display() {
        cout << "Engineer - ";
        Employee::display();
        cout << ", Qulification: " << qulification << endl;
    }
};

int main() {
    Manager obj1("Meet S.", 12, "Engineering");
    Engineer obj2("Himesh P.", 78, "Software Development");
    Clerk obj3("Dhruv S." , 56 , "MBA" );

    obj1.display();
    obj2.display();
    obj3.display();


    return 0;
}