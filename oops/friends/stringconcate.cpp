//10. Perform string concatenation using friend function: Create a class for strings with private data members and a friend function to concatenate two strings.

#include<iostream>
#include<string.h>
using namespace std;

class StringConcate{
private:
    char str1[10];
    char str2[10];
public:
    StringConcate(char s1[], char s2[]){
        strcpy(str1,s1);
        strcpy(str2,s2);
        // str1[10] = s1[10];
        // str2[10] = s2[10];
    }
  
    friend void concatestring(StringConcate& obj);
};

void concatestring(StringConcate& obj){
    string str = strcat(obj.str1,obj.str2);
    cout << "The concate string is :- " << str << endl;
}

int main(){
    char a[10] = "asdf";
    char b[10] = "ghj";
    StringConcate obj1(a ,b);
    concatestring(obj1); 
    return 0;
}