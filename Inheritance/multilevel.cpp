#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"eats\n";
    }
    void breadth(){
        cout<<"breaths\n";
    }
};

class Mammel : public Animal{
public : 
    string bloodType;
    Mammel(){
        bloodType = "warm";
    }
};

class Dog: public Mammel{
public:
    void tailWag(){
        cout<<"a dog wage its tail\n";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breadth();
    d1.tailWag();
    cout<<d1.bloodType<<endl;
    return 0;
}