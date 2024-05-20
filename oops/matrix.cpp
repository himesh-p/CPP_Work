//8. Matrix Operations:
//   Write a class to perform matrix operations such as addition, subtraction, multiplication, and transpose for matrices of integers or floating-point numbers.

#include<iostream>
using namespace std;

class Matrix{
private:
    int a[2][2] = {{1,2},{4,5}};
    int b[2][2] = {{3,6},{7,8}};
    int c[2][2] = {0};
    int d[2][2];
public:
    void display(){
        int i,j;
        cout << "The array1:- " << endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << "The array2:- " << endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    void addition(){
        int i,j;
        cout << endl << "The addition of two matrix is:- " << endl ;
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    void substraction(){
        int i,j;
        cout << endl << "The substraction of two matrix is:- " << endl ;
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j] = b[i][j] - a[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    void multiplication(){
        int i,j,k;
        cout << endl << "The multiplication of two matrix is:- " << endl ;
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j] = 0;
                for(k=0;k<2;k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    void transpose(){
        int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                d[i][j] = a[j][i];
            }
        }
        cout << endl << "The transpose array is:- " << endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << d[i][j] << " ";
            }
            cout << endl ;
        }
    }
};

int main(){
        Matrix m;
        m.display();
        m.addition();
        m.substraction();
        m.multiplication();
        m.transpose();
        return 0;
}