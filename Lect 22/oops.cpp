#include <bits/stdc++.h>
using namespace std;
// #include "C:\Users\gb\Desktop\Coding Blocks\CPP\Lect 22\oops.h"

// Game::Game(string name)
// {
//     this->name = name;
// }
// Game::Game()
// {
// }

// void Game::print_name(string name)
// {
//     cout << this->name << " " << name;
// }

// int Game::play()
// {
//     cout << " we are playing";
// }

// class CB
// {

// public:
//     // string func(double a, double b)
//     // {
//     //     cout << a + b << endl;
//     //     return "sas";
//     // }
//     int func(int a, int b)
//     {
//         cout << a + b << endl;
//         return 3;
//     }
// };

class ComplexNums
{

public:
    double real;
    double imagi;

    ComplexNums operator+(ComplexNums &c1)
    {
        ComplexNums result;
        result.real = real + c1.real;
        result.imagi = imagi + c1.imagi;
        return result;
    }
};

class P
{
public:
    string a;
    void hello()
    {
        cout << "hello from P" << endl;
    }
    P()
    {
        a = "Parent";
    }
};

class C : public P
{
public:
    // string a;
    void hello()
    {
        cout << "hello from C" << endl;
    }
    // C()
    // {
    // }
};

int main()
{

    C c1;
    c1.hello();
    c1.P::hello();

    cout << "output" << c1.a << " " << c1.P::a << endl;
    // ComplexNums n1, n2, n4, n3;
    // n1.real = 5;
    // n1.imagi = 7;

    // n2.real = 3;
    // n2.imagi = 1;

    // // cout << n1 + n2 << endl;

    // n4 = n1 + n2;
    // cout << n4.real << " i" << n4.imagi << endl;
    // n3 = n1.operator+(n2);

    // cout << n3.real << " i" << n3.imagi << endl;
    // int x = c1.func(2, 4);

    // string d = c1.func(2.4, 3.5);
    // static allocation
    // Game a1("CAT");
    // // a1.name = "Dog";

    // cout << a1.name << endl;

    // a1.print_name("DOG");
    // Game::lives = 5;
    // cout << Game::lives << endl;
    // Game::print_lives();
    // // dynamic
    // Animal *a2 = new Animal;

    // (*a2).name = "Cat";
    // cout << (*a2).name << endl;

    // a2->name = "Dog";
    // cout << a2->name << endl;
}