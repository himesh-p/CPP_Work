#include<iostream>
using namespace std;

//abstract class
class Vehicle {
public:
    Vehicle(string brand, string model, double maxSpeed) : brand(brand), model(model), maxSpeed(maxSpeed) {}

    //Pure virtual functions (Abstract methods)
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Max Speed: " << maxSpeed  << " kmph" << endl;
    }

private:
    string brand;
    string model;
    double maxSpeed;
};

//concrete class
class Car : public Vehicle {
public:
    Car(string brand, string model, double maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Starting the car's engine." << endl;
    }

    void stopEngine() override {
        cout << "Stopping the car's engine." << endl;
    }
};

//Concrete Class
class Motorcycle : public Vehicle {
public:
    Motorcycle(string brand, string model, double maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Starting the motorcycle's engine." << endl;
    }

    void stopEngine() override {
        cout << "Stopping the motorcycle's engine." << endl;
    }
};

//Concrete Class
class Bicycle : public Vehicle {
public:
    Bicycle(string brand, string model, double maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Bicycles don't have any engines." << endl;
    }

    void stopEngine() override {
        cout << "Bicycles don't have any engines." << endl;
    }
};

int main() {
    Car car("Toyota", "Camry", 120.0);
    Motorcycle motorcycle("Honda", "CBR600RR", 170.0);
    Bicycle bicycle("Trek", "FX 2", 25.0);

    car.displayInfo();
    car.startEngine();
    car.stopEngine();
    cout << endl;

    motorcycle.displayInfo();
    motorcycle.startEngine();
    motorcycle.stopEngine();
    cout << endl;

    bicycle.displayInfo();
    bicycle.startEngine();
    bicycle.stopEngine();
    cout << endl;

    return 0;
}