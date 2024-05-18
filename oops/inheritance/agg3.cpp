//3. Library Catalog System:
//   Design a library catalog system where each library has multiple sections, and each section contains multiple books. Create classes for Library, Section, and Book. The Library class should aggregate Section objects, and each Section object should aggregate Book objects. Implement functionalities to add new books, search for books by title or author, and display all books available in a particular section.

#include<iostream>
using namespace std;

class Book{
private:
    string author;
    string title;
public:
    Book(string author , string title) : author(author) , title(title) {}

    string getAuthor(){
        return author;
    }
    string getTitle(){
        return title;
    }
};
  
class Section{
private:
    Book** books;
    string type;
    int capacity;
    int num_book;
public:
    Section(string type):type(type) , capacity(10){
        num_book = 0;
        books = new Book*[capacity];
    }

    ~Section(){
        delete[] books;
        delete books;
    }

    void add_books(Book* book){
        if(num_book == capacity){
            cout << "Can not added more books, capacity is full." << endl;
            return;
        }
        books[num_book++] = book;
    }

    void searchBook(string &search){
        for (int i = 0; i < num_book; i++)
        {
            if(books[i]->getTitle() == search){
                cout << search << " -> This book is found." << endl; 
            }
            else{
                cout << search << " -> This books is not found." << endl;
            }
        }   
    }

    void displayInfo(){
        cout << "Books are in their type:- " << type << endl; 
        for (int i = 0; i < num_book; i++){
            cout << "Books Title:- " << books[i]->getTitle() << "and author name:- " << books[i]->getAuthor()  << endl;
        }     
    }
};

class Library{
private:
    Section** sections;
    int capacity;
    int num_section;
    string name;
public:
    Library(string name) : name(name) , capacity(10){
        num_section = 0;
        sections = new Section*[capacity];
    }

    ~Library(){
        delete[] sections;
        delete sections;
    }

    void add_sections(Section* section){
        if(num_section == capacity){
            cout << "Sorry Can not add more section , Library storage is full." << endl;
            return;
        }
        sections[num_section++] = section;
    }

    void findBookinSection(string& sectionName){
        for (int i = 0; i < num_section; i++)
        {
            if(sections[i]->searchBook() ){}
        }
        
    }
};
int main(){

    return 0;
}