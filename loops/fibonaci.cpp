#include<iostream>

using namespace std;

int main(){
             int t1=0,t2=1;
             int nt = t1+t2;
             int i;
             int term;
             cout << "Enter the terms of the fibonaci serries:- ";
             cin >> term;
             cout << "The fibonaci series is:- "<< t1 << "," << t2 << ",";
             for(i=2;i<term;i++){
                nt =t1 + t2;
                cout << nt << ",";
                t1 =t2;
                t2 = nt;    
             }
             return 0;

}