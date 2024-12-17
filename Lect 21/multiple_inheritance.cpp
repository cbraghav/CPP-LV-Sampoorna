#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    A()
    {
        cout << "cons A called \n";
    }

    void hello()
    {
        cout << "hello from A";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "cons B called \n";
    }
};

class C : public A
{
public:
    C()
    {
        cout << "cons C called \n";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "cons D called \n";
    }
};
int main()
{

    D d1;
}