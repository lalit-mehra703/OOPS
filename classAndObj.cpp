#include<iostream>
using namespace std;

class Student{
    //by default the properties and methods are private
    string name;   //properties
    float cgpa;  //properties

    //methods
    void getPercentage(){
        cout<<(cgpa * 10)<<"% \n";
    }
};

class User {
    int id ;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"deleting account \n";
    }

    void editBio(string newBio){
        bio = newBio;
    }
};

int main(){
    Student s1;  //s1 is the object of Student class
    cout<<sizeof(s1)<<endl;

    User u1; //u1 is the object of User class
    return 0;
}