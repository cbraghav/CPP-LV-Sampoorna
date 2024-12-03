#include <bits/stdc++.h>
using namespace std;

void printNumber(int N)
{
    // base case
    if (N <= 0)
    {
        return;
    }

    // cout << N << " "; // print n to 1
    printNumber(N - 1);

    cout << N << " "; // print 1 to n
}

int main()
{
    printNumber(5);
}