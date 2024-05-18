#include<iostream>
using namespace std;

class Tranjection{
    public:
    int tranjection_id;
    float amount;
    string tranjection_type;

    Tranjection(int ti,float a,string tt){
        tranjection_id = ti;
        amount = a;
        tranjection_type = tt;
    }
    void display(){
        cout << "The tranjection_id = " << tranjection_id << endl;
        cout << "The amount is = " << amount << endl;
        cout << "The tranjection type = " << tranjection_type << endl;
    }
};

int main(){
    int ti;
    float a;
    string tt;
     cout << "Enter the tranjection_id = " << endl;
        cin >> ti;
        cout << "Enter the amount = " << endl;
        cin >> a;
        cout  << "Enter the tranjection type = " << endl;
        cin >> tt;
    Tranjection t(ti,a,tt);
    t.display();
}