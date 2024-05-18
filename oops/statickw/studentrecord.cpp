#include<iostream>
using namespace std;

class StudentRecord{
public:
    string Student;
    
    static int count;
    int maths,phyics,chemistry;

    StudentRecord(string s, int m1 , int m2, int m3){
        Student = s;
        maths = m1;
        phyics = m2;
        chemistry = m3;
    }
    void averageScore(){
        int avg = (maths+phyics+chemistry)/3;
        cout << "The name of student is :- " << Student << endl;
        cout << "The average score is :- " << avg;
    }
};

int StudentRecord::count= 3;
int main(){
    StudentRecord obj("Himesh" , 70 , 80 , 90);
    obj.averageScore();
}