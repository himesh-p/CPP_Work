//5. Design a class representing a social media post with dynamic storage for comments and likes. Implement a copy constructor to facilitate sharing posts across multiple user profiles.

#include<iostream>
using namespace std;

class Profile{
private:
    string name;
    double likes;
    double comments;
public:
    Profile(string n , double l , double c) : name(n) , likes(l) , comments(c){}

    Profile(Profile &obj){
        name = obj.name;
        likes = obj.likes;
        comments = obj.comments;
    }

    void display(){
        cout << "The name of this profile is :- " << name << endl;
        cout << "The likes of this post is :- " << likes  << "k"<< endl;
        cout << "The comments of this post :- "  << comments << endl;
     }
};

int main(){

    Profile Id1("Himesh_Patel_50" , 30.6 , 105);
    Profile Id2(Id1); 
     Id1.display();
     Id2.display();
    return 0;
}