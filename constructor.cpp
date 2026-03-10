#include <iostream>
using namespace std;

class Car{
    string name;
    string color;

public: 
    Car(){  // constructor (Its main purpose is to initialize the object (set initial values for variables).)
        cout<<"constructor is called object being created..\n";
    }

    void start (){
        cout<<"car has started \n";
    }

    void stop(){
        cout<<"car has stoped \n";
    }

};

int main(){
    Car c1;
    return 0;
}