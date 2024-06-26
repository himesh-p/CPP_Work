//2. Library Management System:
//   Create a class for books with attributes such as title, author, and availability. Implement methods to check out and return books, and to display the list of available books.

#include<iostream>
#include<string>
using namespace std;

const int MAX_ITEMS = 100;

class List{
    public:
    string title;
    string author;
};

class Books{
    private:
    List books[MAX_ITEMS];
    int countBook = 0;

    public:
    void addBooks(string t , string a){
        if(countBook < MAX_ITEMS){
                books[countBook].title = t; 
                books[countBook].author = a; 
                countBook++;
                cout << t << " added to the List" << endl;
            }
        else{
            cout << "Cannot added more books. List is full.";  
        }
    }
    
    void removeBooks(string title){
        for(int i=0;i<countBook;i++){
            if(books[i].title == title){
               title = "none"; 
            }
        }
    }
    void display(){
        for (int i = 0; i < countBook ; i++)
        {
            if(books[i].title != "none"){
                cout << "Title:- " << books[i].title << endl;
                cout << "Author:- " << books[i].author << endl;
            }
        }
    }
};

int main(){
    Books b;
    b.addBooks("book1" , "author1" );
    b.removeBooks("Book1");
    b.display();
}