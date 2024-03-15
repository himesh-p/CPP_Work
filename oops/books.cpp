#include<iostream>
using namespace std;

class book{
        string title;
        string author;
        float price;

       public: 
       void scan(){
            cout << "\nEnter the title of the book:- ";
            cin >> title;
            cout << "\nEnter the name of book's author:-  ";
            cin >> author;
            cout << "\nEnter the price of book:-  ";
            cin >> price;
       } 
       void display(){
            cout << "\nThe title of the book is:- " << title ;
            cout << "\nThe aouther's name of this book is:-  " << author;
            cout << "\nThe price of this book is:- " << price;
       }
       void information(){
            cout << "\nThe information of this book is below:- ";
            cout << "\n\n\n";
            cout << "\nHarry surrenders to Voldemort and dies. The defenders of Hogwarts continue to fight on; Harry is resurrected, faces Voldemort and kills him. An epilogue titled 'Nineteen Years Later' describes the lives of the surviving characters and the impact of Voldemort's death.";
       }
};

int main(){
    book b;
    b.scan();
    b.display();
    b.information();
}