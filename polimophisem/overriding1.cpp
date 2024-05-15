#include<iostream>
using namespace std;

class Product{
private:
    string name;
    float price;
    float discription;
public: 
    Product(string n, float p, float d){
        name = n;
        price = p;
        discription = d;
    }
    void displayInfo(){
        cout << "The name of Prodct:- " << name  << endl;
        cout << "The price of the Product:- " << price << endl;
        cout << "The discription of the Product:- " << discription << endl;
    }
};

class PhysicalProdeuct : public Product{
private: 
    int weigth;
    int shoppingcost;
    int deliverytime;
public:
    // PhysicalProdeuct(string n , float d , string j){}
    void displayInfo(){
        cout << "The Weigth of this Physical product:- " << weigth << endl;
        cout << "The Shopping Cost of this product is:- " << shoppingcost << endl;
        cout << "The delivery time of this product is:- " << deliverytime << endl;
    }
};

class DigitalProdeuct : public Product{
private: 
    string link;
    int size;
public:
    void displayInfo(){
        cout << "The link of this digital product:- " << link << endl;
        cout << "The size of this digital product is:- " << size << endl;
    }
};
int main(){

    // Product p("Food" , 5 , "testy");


    return 0;
}