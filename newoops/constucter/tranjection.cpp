#include<iostream>
using namespace std;

class Tranjection{
    public:
    int tranjection_id;
    float amount;
    string tranjection_type;

    Tranjection(){
        tranjection_id = 0;
        amount = 0.0;
        tranjection_type = "";
    }
    void scan(){
        cout << "Enter the tranjection_id = " << endl;
        cin >> tranjection_id;
        cout << "Enter the amount = " << endl;
        cin >> amount;
        cout  << "Enter the tranjection type = " << endl;
        cin >> tranjection_type;
    }
    void display(){
        cout << "The tranjection_id = " << tranjection_id << endl;
        cout << "The amount is = " << amount << endl;
        cout << "The tranjection type = " << tranjection_type << endl;
    }
};

int main(){
    Tranjection t;
    t.scan();
    t.display();
}