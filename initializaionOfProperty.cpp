#include <iostream>
using namespace std;

class Car{
    string name;
    string color;

public :
    Car (string nameValue, string colorValue){ //constructor
        cout<<"constructor is called\n";
        name = nameValue;
        color = colorValue;
    }

    void start(){
        cout<<"car started\n";
    }

    void stop(){
        cout<<"car stoped\n";
    }
};

int main(){
    Car c1("maruti800", "white");
    c1.start();
    return 0;
}