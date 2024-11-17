#include <iostream>
#include <string>
using namespace std;


class Animal {
protected:
    string name;

public:
    
    Animal(const string& name,bool init = true) : name(name) {
        if(init){
        cout << "Animal constructor called for " << name << endl;
    }
    }

    
    void displayInfo() const {
        cout << "This is an animal named " << name << "." << endl;
    }

    
    ~Animal() {
        cout << "Animal destructor called for " << name << endl;
    }
};

//! Inheritance type (Public,Protected,Private)

class Dog : public Animal {
public:
    // Constructor that calls the base class constructor
    Dog(const string& name) : Animal(name,false) {
        cout << "Dog constructor called for " << name << endl;
    }

   
    void bark() const {
        cout << name << " says: Woof!" << endl;
    }

   
    ~Dog() {
        cout << "Dog destructor called for " << name << endl;
    }
};


class Cat : public Animal {
public:
    // Constructor that calls the base class constructor
    Cat(const string& name) : Animal(name,false) {
        cout << "Cat constructor called for " << name << endl;
    }

   
    void meow() const {
        cout << name << " says: Meow!" << endl;
    }

    
    ~Cat() {
        cout << "Cat destructor called for " << name << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    
    myDog.displayInfo(); 
    myDog.bark();        

    myCat.displayInfo(); 
    myCat.meow();        


}
