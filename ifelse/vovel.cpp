#include<iostream>

using namespace std;
int main(){
      char ch;
      cout << "Enter the any character :-  ";
      cin >> ch;
      if(ch == 'a' ||ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' ){
            cout << "The character is vovel.";
      }  
      else{
        cout << "The character is constant.";
      }


}