#include<iostream>
using namespace std;

class String{
    string name;

    public:
    void scan(){
        cout << "\nEnter the any string:- ";
          getline(cin,name);
    }
    void display(){
          cout << "\nThe string is:- " << name ;
    }
    int number(){
        int i=0;
        int count=0;
        while(name[i] != '\0'){
            count++;
            i++;
        }
        // cout << "\nThe total character of this string is :- " << count;
        return count;
    }
    void revers(){
            char temp;
            string name1;
            int k;
            int c = number();
            int j = c - 1;
            name1 = name;
        for(k=0;k<j;k++,j--){
            temp = name1[k];
            name1[k] = name1[j];
            name1[j] = temp;  
        }
            cout << "\nThe reverse string is:- " << name1;
        if(name == name1){
            cout << "\nThe string is pelindrom.";
        }   
         
    }
      
};

int main(){
     String s;
     s.scan();
     s.display();
     s.number();
     s.revers();

   return 0;
}