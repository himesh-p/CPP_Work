//1. Problem Statement: You are tasked with creating a program for a library management system. Implement a function that takes a book title as input and checks if it matches any of the books currently available in the library's database.

//   Sample Test Case:
//   - Input: "The Great Gatsby"
//   - Output: Book found in the library database.
#include<iostream>
#include<string>
using namespace std;

int main(){

    string tit[5] = {"abc" , "def" , "ghi" , "jkl" , "mno"};
    string find;
    int com;
    cout << "Enter the any book name" << endl;
    getline(cin,find);
    cout << "string: '" << find << "'" << endl;
    for (int i = 0; i < 5; i++)
    {
        com = find.compare(tit[i]);
    }
    if(com == 0){
        cout << "Book is find in library." << endl;
    }
    else{
        cout << "'" << tit[0] << "'" << endl; 
        cout << "Book is not find in library." << endl;
    }
    return 0;
}