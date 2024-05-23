//2. Design a class to model a shopping cart for an online store with dynamic storage for product items. Implement a copy constructor to support duplicating the shopping cart contents for different user sessions.

#include<iostream>
using namespace std;

class ShoppinCart{
private:
    string name;
    double price;
public:
    ShoppinCart(string n , double p) : name(n) , price(p){}

    ShoppinCart(ShoppinCart& obj){
        name = obj.name;
        price = obj.price;
    }

    void display(){
        cout << "The name of the product :- " << name << endl;;
        cout << "The price of the product :- " << price << endl;
     }
};

int main(){
    ShoppinCart cart1("Milk" , 34);
    ShoppinCart cart2(cart1);

    cart1.display();
    cart2.display();
    return 0;
}