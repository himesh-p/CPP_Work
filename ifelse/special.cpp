#include<iostream>

using namespace std;

int main(){
            char c;
            cout << "Enter the character:- ";
            cin >> c;
            if (( c>=32 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) )
            {
                cout << "This is special character.";
            }
            else{
                cout << "This is not special charecter.";
            }
            return 0;
}