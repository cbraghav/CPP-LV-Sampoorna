#include <bits/stdc++.h>

using namespace std;

class Animals
{
private:
    int legs;
    int speed;

protected:
    void set_legs(int a)
    {
        legs = a;
    }

public:
    int get_legs() { return legs; }

    Animals()
    {
        cout << "Animals called";
    }
};

class Dog : public Animals
{

public:
    void bark()
    {
        cout << "dog barks\n";
    }

    void set_animal_legs(int x)
    {
        set_legs(x);
    }
    int get_animal_legs()
    {
        return get_legs();
    }
    Dog()
    {
        cout << "Dogs called";
    }
};

class Puppy : public Dog
{
public:
    void check()
    {
        bark();
        set_animal_legs(5);
        get_animal_legs();
        get_legs();
        set_legs(5);
    }

    Puppy()
    {
        cout << "puppy called";
    }
};

class Cat
{
};

int main()
{

    Puppy d1;

    // d1.bark();
    // d1.set_animal_legs(10);

    // cout << d1.get_animal_legs() << endl;
}