// Inheritance ==>સરળ સમજ: જેમ બાળક ને માતા-પિતા ના ગુણ મળે, તેમ Child class ને Parent class ના properties અને methods મળે.
#include<iostream>
using namespace std;

// Parent Class (Base Class)
class Animal {
public:
    string name;

    void eat() {
        cout << "Animal is eating" << endl;
    }

    void breathe() {
        cout << "Animal is breathing" << endl;
    }
};

// Child Class (Derived Class) - Animal ના ગુણ મળ્યા
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking: Woof!" << endl;
    }
};

int main() {
    Dog d;
    d.name = "Tommy";        // Animal class માંથી મળ્યું
    d.eat();                 // Animal class માંથી મળ્યું
    d.breathe();             // Animal class માંથી મળ્યું
    d.bark();                // Dog class નું પોતાનું
    
    return 0;
}