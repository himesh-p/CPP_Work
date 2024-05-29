//1. Cuisine Management System:
 //  - Problem: Design a system to manage different cuisines offered by a restaurant.
 //  - Test Case: Ensure that each cuisine can calculate the total cost of its dishes.
 //  - Logic: Create an abstract class 'Cuisine' with methods for adding dishes and calculating total  cost. Subclasses like 'ItalianCuisine', 'ChineseCuisine', etc., implement specific dish addition and cost calculation logic.

 #include<iostream>
 using namespace std;

class Cuisine{
private:
    string name;
    double price;
public:
    Cuisine(string n , double p) : name(n) , price(p){}

    virtual void display() = 0; 
    virtual string getName(){
        return name;
    }
    virtual double getPrice(){
        return price;
    }
};

class ItalianCuisine : public Cuisine{
public:
    ItalianCuisine(string n , double p) : Cuisine(n,p){}

    void display() override{
        cout << "The name of this dish :- " << Cuisine::getName() << " , and price is :- " << Cuisine::getPrice() << endl;  
    }
};

class ChineseCuisine : public Cuisine{
public:
    ChineseCuisine(string n , double p) : Cuisine(n,p){}

    void display() override{
        cout << "The name of this dish :- " << Cuisine::getName() << " , and price is :- " << Cuisine::getPrice() << endl;  
    }
};


class Managment{
private:
    int capacity;
    int num_dish;
    Cuisine **cuisenes;
public:
    Managment(int cap) : capacity(cap) , num_dish(0){
        cuisenes = new Cuisine*[capacity];
    }

    ~Managment(){
        for (int  i = 0; i < num_dish; i++)
        {
            delete cuisenes[i];
        }
        delete[]  cuisenes;     
    }

    void add_dishes(Cuisine *cuisine){
        if(num_dish < capacity){
            cuisenes[num_dish++] = cuisine;
        }
        else{
            cout << "Cannot added more dishes because capacity is full." << endl;
        }
    }

    double calculateTotal(){
        double total = 0.0;
        for (int i = 0; i < num_dish; i++)
        {
            total += cuisenes[i]->getPrice();
        }
        return total;
    }

    void display(){
        cout << "Your packege :- " << endl;
        for (int i = 0; i < num_dish; i++)
        {
            cuisenes[i]->display();
        }
        cout << "The total payment is :- " << calculateTotal() << endl;
    }
};

int main(){

    Managment obj(5);
    obj.add_dishes(new ChineseCuisine("Chinise" , 100));
    obj.add_dishes(new ChineseCuisine("Manchurian" , 130));
    obj.add_dishes(new ChineseCuisine("manchow shoup" , 60));
    obj.add_dishes(new ItalianCuisine("Italian Pizza" , 430));
    obj.add_dishes(new ItalianCuisine("Italian Pasta" , 280));
    obj.add_dishes(new ItalianCuisine("Italian Pasta" , 280));
    // obj.add_dishes(new ItalianCuisine("Italian Pasta" , 280));


    obj.display();

    return 0;
}