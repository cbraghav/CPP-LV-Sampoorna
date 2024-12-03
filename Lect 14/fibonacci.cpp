#include <bits/stdc++.h>

using namespace std;

int fib(int N)
{

    if (N <= 0)
    {
        return 0;
    }

    if (N == 1)
    {
        return 0;
    }

    if (N == 2)
    {
        return 1;
    }

    return fib(N - 1) + fib(N - 2);
}

int main()
{

    cout << fib(1) << endl;
    cout << fib(2) << endl;
    cout << fib(3) << endl;
    cout << fib(4) << endl;
    cout << fib(5) << endl;
    cout << fib(6) << endl;
    cout << fib(7) << endl;
}