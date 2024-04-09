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
                
            }
        }
    }

};