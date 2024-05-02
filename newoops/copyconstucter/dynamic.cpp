//7. Develop a class representing a scientific experiment setup with dynamic storage for equipment objects. Implement a copy constructor to support replicating the experiment setup for comparative analysis.

#include<iostream>
using namespace std;

class Equipment {
    string name;
    double cost;
public:
    Equipment(string n, double c) : name(n), cost(c) {}

    void display() {
        cout << "Equipment: " << name << ", Cost: " << cost << endl;
    }
};

class ExperimentSetup {
    Equipment** equipments;
    int numEquipments;

public:
    ExperimentSetup(int num) : numEquipments(num) {
        equipments = new Equipment*[numEquipments];
    }

    ExperimentSetup(ExperimentSetup& other) : numEquipments(other.numEquipments) {
        equipments = new Equipment*[numEquipments];
        for (int i = 0; i < numEquipments; i++) {
            equipments[i] = new Equipment(*(other.equipments[i]));
        }
    }

    ~ExperimentSetup() {
        for (int i = 0; i < numEquipments; i++) {
            delete equipments[i];
        }
        delete[] equipments;
    }

    void addEquipment(int index, Equipment* equipment) {
        if(index >= 0 && index < numEquipments) {
            equipments[index] = equipment;
        }
    }

    void display() {
        cout << "Experiment Setup: " << endl;
        for (int i = 0; i < numEquipments; i++) {
            cout << "Euipment at index " << i << endl;
            if(equipments[i] != nullptr) {
                equipments[i]->display();
            } else {
                cout << "Empty" << endl;
            }
        }
    }
};


int main() {
    Equipment e1("Microscope", 50000);
    Equipment e2("Spectrometer", 100000);

    ExperimentSetup setup(2);

    setup.addEquipment(0, &e1);
    setup.addEquipment(1, &e2);

    cout << "Original Experiment Setup:" << endl;
    setup.display();

    ExperimentSetup copySetup = setup;

    cout << "\nCopied Experiment Setup: " << endl;
    copySetup.display();

    return 0;
}