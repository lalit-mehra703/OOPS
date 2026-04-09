#include <iostream>
using namespace std;

class Car {
public :
    string color;
    string name;
    int *mileage;

    Car(string name, string color){
        cout<<"make car....\n";
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }

    Car(Car &original){
        cout<<"copying original to new...\n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car(){
        cout<<"deleting object..\n";
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
            cout<<"mileage = "<<mileage<<endl;
        }
    }
};

int main(){
    Car c1("maruti 800", "white");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
    return 0;
}