#include<iostream>
using namespace std;

class Book{
     public:
     string title;
     string author;
     int year;

     Book(string t , string a , int y){
        title = t;
        author = a;
        year = y;
     }

     void display(){
          cout << "\nThe title of the book is:- " << title ;
          cout << "\nThe aouther's name of this book is:-  " << author;
          cout << "\nThe publition year this book is:- " << year;
     }
};

int main(){
     string t, a;
     int y;
     
     cout << "\nEnter the title of the book:- ";
     // cin.ignore();
     getline(cin,t);
     cout << "\nEnter the name of book's author:-  ";
     // cin.ignore();
     getline(cin,a);
     cout << "\nEnter the publition year book:-  ";
     cin >> y;
     
     Book b(t, a, y);
     b.display();
}