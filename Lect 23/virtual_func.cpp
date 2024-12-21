#include <bits/stdc++.h>

using namespace std;

class base
{

public:
    virtual void print()
    {
        cout << "print from base class" << endl;
    }
};

class child : public base
{
public:
    void print()
    {
        cout << "print from child class" << endl;
    }
};

int main()
{

    child c1;
    c1.print();

    base b1;
    b1.print();

    base *baseptr;
    baseptr = &c1;

    baseptr->print();
}