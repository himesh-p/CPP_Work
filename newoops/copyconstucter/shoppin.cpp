#include<iostream>
using namespace std;

class Shopping {
private:
    string name;
    float price;
public:
   Shopping(string n, float p) {
        name = n;
        price = p;
    }

   Shopping(Shopping& s) {
        name = s.name;
        price = s.price;
    }

    void display() {
        cout <<endl << "The name of item:- " << name << endl;
        cout << "The price of item:- " << price << endl;
    }
};

int main() {
   
   Shopping n("Milk" , 32);

   Shopping m(n);

    n.display();
    m.display();

    return 0;
}