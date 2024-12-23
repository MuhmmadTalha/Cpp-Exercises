// Zoo Management System:
// Create an abstract class Animal with a pure virtual function speak(). Derive classes Dog, Cat,
// and Bird that implement this function. Write a program to call the speak function
// polymorphically using a base class pointer.

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() {}
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Bark Bark!" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "Meow! Meow!" << endl;
    }
};

class Bird : public Animal
{
public:
    void speak() override
    {
        cout << "Chirp! Chirp!" << endl;
    }
};

int main()
{
    Animal *anim;

    Dog d;
    Cat c;
    Bird b;

    anim = &d;
    anim->speak();

    anim = &c;
    anim->speak();

    anim = &b;
    anim->speak();
    return 0;
}