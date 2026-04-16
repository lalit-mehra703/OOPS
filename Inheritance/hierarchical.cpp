#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"eats\n";
    }
    void breath(){
        cout<<"breaths\n";
    }
};

class Bird : public Animal{
public : 
    void fly(){
        cout<<"flys\n";
    }
};

class Fish : public Animal{
public : 
    void swim(){
        cout<<"swims\n";
    }
};

class Mammel : public Animal{
public :
    void work(){
        cout<<"walk\n";
    }
};

int main(){
    Bird b1;
    b1.breath();
    b1.eat();
    b1.fly();
    return 0;
}