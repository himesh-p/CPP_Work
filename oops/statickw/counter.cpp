#include<iostream>
using namespace std;

class BioData{
private:
    string name;
    string hobby;
    int age;
    static int count;
public:
    BioData(string name , string hobby , int age ){
        this->name = name;
        this->hobby = hobby;
        this->age = age;
        count++;
    }

    void display(){
        cout << "The name is:- " << name << endl;
        cout << "The Hobby is :- " << hobby << endl;
        cout << "The age is :- " << age << endl;
    }
};

int BioData::count = 1;

int main(){    
    BioData obj1("Himesh" , "Cricket" , 18);
    BioData obj2("Maan" , "coding" , 14);
    BioData obj3("Harsh" , "maths" , 28);
    BioData obj4("Jeel" , "physics" , 98);
    BioData obj5("Meet" , "basball" , 80);
    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
    obj5.display();

    cout << BioData::count;
    return 0;
}