#include <iostream>
using namespace std;

//copy constructor used to copy properties of one object into another

class Car{

public : 
    string name;
    string color;

    // if we no create out custom cunstructor then compiler automatically create a copy consturctor;

    Car(string name, string color){
        this->name = name;
        this->color = color;
    }

    //copy constructor 
    Car(Car &original){
        cout<<"copying...\n";
        name = original.name;
        color = original.color;
    }
};

int main(){
    Car c1("maruti 800 ", "white");
    Car c2(c1);
    cout<<c2.name <<endl;
    cout<<c2.color<<"\n";
    return 0;
}