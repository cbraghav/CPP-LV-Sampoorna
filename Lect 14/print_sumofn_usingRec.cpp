#include <bits/stdc++.h>
using namespace std;

// TC O(N)
int Sum(int N)
{
    if (N <= 0)
    {
        return 0;
    }

    return N + Sum(N - 1);
}

void Sum2(int N, int SumE, int SumO)
{
    if (N <= 0)
    {
        return;
    }
    if (N % 2 == 0)
    {
        SumE += N;
    }
    else
    {
        SumO += N;
    }
    Sum2(N - 1, SumE, SumO);
}

int Fact(int N)
{
    if (N <= 1)
    {
        return 1;
    }

    return N * Fact(N - 1);
}
int main()
{

    cout << Sum(10) << endl;
    ;

    int ans = Fact(5);

    cout << ans << endl;
}