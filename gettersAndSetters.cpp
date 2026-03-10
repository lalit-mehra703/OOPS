#include <iostream>
using namespace std;

class Student {
    string name;
    float cgpa ; //by default the properties and methods are private

public : 
    void getPercentage(){
        cout<<(cgpa * 10)<<"%\n";
    }

    //setters 
    void setName(string nameVal){ // setter
        name = nameVal;
    }

    void setCgpa (float cgpaVal){ // setter
        cgpa = cgpaVal;
    }

    //Getters
    string getName(){ //getter
        return name;
    }

    float getCgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setName("Lucky");
    s1.setCgpa(9.1);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;
}