#include<iostream>
using namespace std;

class Car{
public :
    string color ;
    string name;
    int *mileage;

    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }

    Car(Car &original){
        cout<<"copying original to new ....\n";
        name = original.name;
        color = original.color;
        mileage = original.mileage;  //mileage is the pointer which store only the address of other variable
    }
};

int main(){
    Car c1("maruti 800", "white");
    Car c2(c1);
    cout<<"c2.name = "<<c2.name<<endl;
    cout<<"c2.color = "<<c2.color<<endl;
    cout<<"c2.milleage = "<<*c2.mileage<<endl;
    *c2.mileage = 10;
    cout<<"c1.mileage = "<<*c1.mileage<<endl; //shallow copy copies references to original array or dynamic allocated memory but array and dynamic allocation memory remains same
    return 0;
}