#include <iostream>
using namespace std;

class Car{
    string name;
    string color;

public : 
    
    Car(){
        cout<<"constructor without parameter\n";
    }

    Car(string name, string color){
        cout<<"constructor with parameter\n";
        this->name = name;
        this->color = color;
    }

    void start(){
        cout<<"car has started......\n";
    }

    void stop(){
        cout<<"car has stoped....\n";
    }

    // Getter

    string getName(){
        return name;
    }
};

int main(){
    Car c0;
    Car c1("maruti 800", "white");
    cout<<"car name : " <<c1.getName()<<endl;
    return 0;
}