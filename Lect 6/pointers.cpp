#include <bits/stdc++.h>
using namespace std;
// call by reference with pointer
int increment(int *xptr, int *yptr)
{

    *xptr = *xptr + 1;
    *yptr = *yptr + 1;

    return 0;
}

int increment (int &x , int &y)
{
    
}
int main()
{
    int x = 10;
    int y = 5;

    increment(&x, &y);

    cout << x << " " << y << endl;

    // int x = 10;
    // cout << x << endl;
    // cout << "addr of x " << &x << endl;

    // int *ptr;

    // ptr = &x;

    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr << endl;

    // cout << *(&x) << endl;

    // x++;

    // cout << "" << *ptr << endl;
}