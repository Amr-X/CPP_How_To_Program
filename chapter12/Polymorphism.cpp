#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
  string name;

public:
  Animal(const string &name, bool init = true) : name(name) {
    if (init) {
      cout << "Animal constructor called for " << name << endl;
    }
  }

  //! sound don't make sense here
  //! Can be Pure Virtual
  virtual void sound()
      const = 0; //* Adding Pure Make Animal Abstract
                 // cout << name <<" says: some animal sound" << "." << endl;

  virtual ~Animal() { cout << "Animal destructor called for " << name << endl; }
};

//! final = last Class to be inherited
class Dog final : public Animal {
public:
  // Constructor that calls the base class constructor
  Dog(const string &name) : Animal(name, false) {
    cout << "Dog constructor called for " << name << endl;
  }

  /*  Order matters
      ! virtual = Convention
      ! void = Return Type
      ! const = Don't Change Object(Class)
      ! override = Change The Base Functionality
      ! final = last virtual function
  */
  virtual void sound() const override final {
    cout << name << " says: Woof!" << endl;
  }

  void sleep() const { cout << name << " is sleeping!" << endl; }

  ~Dog() { cout << "Dog destructor called for " << name << endl; }
};

int main() {
  // * Animal(sound) | Dog(sound different),Sleep
  // Animal myNormalAnimal("Animal1"); //? Can't Create this (Abstract Class)
  Dog myNormalDog("Dog1");

  //! Static binding
  // myNormalAnimal.sound();//? Can't Create this (Abstract Class)
  myNormalDog.sound();
  // myNormalAnimal.sleep();
  myNormalDog.sleep();

  // Upcasting Downcasting
  Animal *animalPtr = &myNormalDog; // UpCasting //? Notice (Abstract Animal
                                    // Class) Can be Pointer
  // Dog* dogPtr = &myNormalAnimal;    // DownCasting

  //! Dynamic binding \ based on object type
  animalPtr->sound(); // Dog object here

  //! animalPtr->sleep();
}
