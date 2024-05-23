//7. Develop a class representing a scientific experiment setup with dynamic storage for equipment objects. Implement a copy constructor to support replicating the experiment setup for comparative analysis.

#include<iostream>
using namespace std;

class Equipment{
private:
    string name;
    double cost;
public:
    Equipment(string n , double c) : name(n) , cost(c) {}

    void display(){
        cout << "Name :- " << name << " , Cost :- " << cost << endl;
    }
};

class ExperimentSetUp{
private:
    Equipment** equipments;
    int numEquipment;
public:
    ExperimentSetUp(int num) : numEquipment(num){
         equipments = new Equipment*[numEquipment]; 
    }

    ExperimentSetUp(ExperimentSetUp& obj){
        equipments = new Equipment*[numEquipment];
        numEquipment = obj.numEquipment;
        for (int  i = 0; i < numEquipment; i++)
        {
            equipments[i] = new Equipment(*(obj.equipments[i]));
        }
    }

    ~ExperimentSetUp(){
        for (int i = 0; i < numEquipment; i++)
        {
            delete equipments[i];
        }
        delete[] equipments;   
    }

    void addEquipment(int index , Equipment* equipment){
        if(index >= 0 && index < numEquipment ){
            equipments[index] = equipment;
        }
    }

    void displayEquipmemt(){
        cout << "Equipments Details :- " << endl;
        for (int i = 0; i < numEquipment; i++){
            cout << "Equipment index :- " << i << endl;
            if(equipments[i] != nullptr){
                equipments[i]->display(); 
            }    
            else{
                cout << "Empty" << endl;
            }
        }
    }
};

int main(){
    Equipment e1("MicroPhone" , 50000);
    Equipment e2("VidioPhone" , 200000);

    ExperimentSetUp setUp(2);

    setUp.addEquipment(0,&e1);
    setUp.addEquipment(1,&e2);

    cout << "Original Equipment :- " << endl;
    
    setUp.displayEquipmemt();

    ExperimentSetUp copysetUp = setUp;  
    cout << "Duplicate Equipment :- " << endl;

    copysetUp.displayEquipmemt();

    return 0;
}