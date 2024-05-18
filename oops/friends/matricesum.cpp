#include<iostream>
using namespace std;

class SumOfMatrix{
private:    
    int m1[2][2] = {{1,2} , {3,4}};
    int m2[2][2] = {{5,6} , {7,8}};
public:
    friend void numbersum(const SumOfMatrix& obj);
};

    void numbersum(const SumOfMatrix& obj){
        cout << "The addition of this matrix:- " << endl;
        for (int i = 0; i < 2; i++){
            for(int j =0;j<2;j++){
               cout << obj.m1[i][j] + obj.m2[i][j] << " ";
            }
            cout << endl;
        }
        
    } 
int main(){
    
    SumOfMatrix s;
    numbersum(s);
    return 0;
}