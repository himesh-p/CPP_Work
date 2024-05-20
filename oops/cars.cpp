//5. Create a class named "Car" with data members for make, model, and year. Implement methods to input car details, update year, and display the car's specifications.

#include<iostream>
using namespace std;

class Car{
private:
    int year;
    string model_name;
    string name;
public:
    void scanDetails(){
        cout << "Enter the name of the car:- " << endl;
        getline(cin,name);
        cout << "Enter the model name of the car:- " << endl;
        getline(cin,model_name);
        cout << "Enter the year of the car:- " << endl;
        cin >> year;
    }

    void displayItem(){
        cout << "The name of car:- " << name << endl;
        cout << "The model name of car:- " << model_name << endl;
        cout << "The year of car:- " << year << endl; 
    }

};

int main(){
    Car obj;
    obj.scanDetails();
    obj.displayItem();

    return 0;
}