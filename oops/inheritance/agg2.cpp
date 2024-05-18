// 4. Car Rental Management System:
//    Build a car rental management system for a rental agency. Each agency has multiple branches, and each branch manages multiple cars. Develop classes for Agency, Branch, and Car. The Agency class should aggregate Branch objects, and each Branch object should aggregate Car objects. Provide functionalities to add new cars, rent a car from a specific branch, and calculate total revenue earned by an agency.

#include<iostream>
using namespace std;

class Car{
private:
     string name;
     double price;
public:
    Car(string name , double price) : name(name) , price(price){}
    string getName(){
        return name;
    }    
    double getPrice(){
        return price;
    }
};

class  Branch{
private:
    int capacity;
    int num_car;
    string name;
    Car** cars;
public:
    Branch(string name) : name(name) , capacity(10){
        num_car = 0;
        cars = new Car*[capacity];
    }

    ~Branch(){
        delete[] cars;
        delete cars;
    }

    string getBranchName(){
        return name;
    }

    void addCars(Car *car){
        if(num_car == capacity){
            cout << "Warning , Can not added more cars, capacity is full!!!." << endl;
            return;
        }
        cars[num_car++] = car;
    }

    double calaculateTotalRevnue(){
        if(num_car == 0) {
            return 0.0;
        }

        double total_revnue = 0.0;
        for (int i = 0; i < num_car; i++)
        {
            total_revnue += cars[i]->getPrice();
        }
        return total_revnue/num_car;
    }

    void displayInfo(){
        cout << "Cars in class " << name << ":" << endl;
        for (int i = 0; i < num_car; i++) {
            cout << "- " << cars[i]->getName() << endl;
        }
    }
};

class Agency{
private:
    string name;
    int capacity;
    int num_brances;
    Branch** branches;
public:
    Agency(string name) : name(name), capacity(10) {
        num_brances = 0;
        branches = new Branch*[capacity];
    }

    ~Agency(){
        delete[] branches;
        delete branches;
    }

    int getnum_branches(){
        return num_brances;
    }

    Branch** getBranches(){ 
        return branches;
    }

    void add_branch(Branch* obj) {
        if(num_brances == capacity) {
            cout << "Warning: Agency at capacity, cars not added." << endl;
        }
        branches[num_brances++] = obj;
    }

    double calculate_branch_revnue(string branch_name) {
        for (int i = 0; i < num_brances; i++) {
            cout << branches[i]->getBranchName() << endl;
            if(branches[i]->getBranchName() == branch_name) {
                return branches[i]->calaculateTotalRevnue();
            }
        }
        return -1.0;
    }

};
int main(){
    Agency o1("Royal Wheels");

    Branch o2("Suzuki");
    Branch o3("Huandai");

    o1.add_branch(&o2);
    o1.add_branch(&o3);

    o2.addCars(new Car("Swift" , 1800));
    o2.addCars(new Car("Wagonr" , 5200));
    o3.addCars(new Car("i20" , 1000));
    o3.addCars(new Car("Creta" , 2000));

    o2.displayInfo();
    cout << "The average revanue amount is:- " << o2.calculate_branch_revnue("Suzuki") << endl;
    
    o3.displayInfo();
    cout << "The average revanue amount is:- " << o1.calculate_branch_revnue("Haundai") << endl;
    return 0;
}