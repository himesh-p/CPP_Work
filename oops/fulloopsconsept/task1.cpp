/*
-> Problem Statement 2: Library Book Inventory System
You need to develop a Library Book Inventory System to manage the books available in a library. The system should support the following operations:

1. Create: Add a new book with the attributes ISBN, title, and author.
2. Read: List all the books available in the library.
3. Update: Update the details (title and author) of an existing book based on its ISBN.
4. Delete: Remove a book from the inventory based on its ISBN.

USE SWITCH CASE WHERE IT IS POSSIBLE
*/
#include<iostream>
using namespace std;


class Library{
public:
    string title;
    string author;
    int ISBN;
    Library() : title("") , author("") , ISBN(0){}
    Library(string t, string a , int i) : title(t) , author (a) , ISBN(i){}

    void display(){
        cout << "Title name:- " << title << " , Author name :- " << author << " , ISBN Num :- " << ISBN << endl;
    }
};

class Managment{
private:
    Library*libraries;
    int size;
    int capacity;
public:
    Managment(int cap) : capacity(cap) , size(0){
        libraries = new Library[capacity];
    }

    ~Managment(){
        delete[] libraries;
    }

    void creatLibrary(string t , string a , int i){
        if(size >= capacity){
            cout << "Warning capacity is full. Cannot add more books." << endl;
            return;
        }

        libraries[size++] = Library(t,a,i);
        cout << "Books added succesfull in the library." << endl;
    }

    void readBook(){
        if(size == 0){
            cout << "No books are added in library." << endl;
        }
        for (int i = 0; i < size; i++)
        {
            libraries[i].display();
        }
    }

    void updateBook(string t , string a , int isbn){
        for (int i = 0; i < size; i++)
        {
            if(libraries[i].ISBN == isbn){
                libraries[i].author = a;
                libraries[i].title = t;

                cout << "The books details are updated successfuly." << endl;
                return;
            }  
        }
        cout << "ISBN number is not match for each books so cannot update details succesfully." << endl;
    }


    void deleteBooks(int isbn){
        for (int i = 0; i < size; i++){
            if(libraries[i].ISBN == isbn){
                for (int j = i; j < size-1; j++)
                {
                    libraries[j] = libraries[j+1];
                }
                size--;
                cout << "The details of this book is deleted succesfully." << endl;
                return;
            }
        }
        cout << "Cannot deleted details because you entered id :- " << isbn << " is invailid or not match for this library. " << endl;
    }
};

int main(){

    Managment obj(5);
    obj.creatLibrary("abc" , "Himesh" , 1);
    obj.creatLibrary("def" , "Jeel" , 2);
    obj.creatLibrary("ghi" , "Dhruv" , 3);
    obj.creatLibrary("jkl" , "Smit" , 4);
    obj.creatLibrary("mno" , "Meet" , 5);

    cout << "Current Books: " << endl;
    obj.readBook();

    cout << "Update details of 3rd ISBN num :- " << endl;
    obj.updateBook("ghisdfgh","Dhruv Sharma" , 3);

    cout << "Delete details of 2nd number :- " << endl;
    obj.deleteBooks(2);

    cout << "Current Books: " << endl;
    obj.readBook();

    cout << "Add new member :- " << endl;
    obj.creatLibrary("qweyk" ,"Maan" ,2);

    cout << "Current Books: " << endl;
    obj.readBook();
    
    return 0;
}