#include <bits/stdc++.h>
using namespace std;

int maxUniqueNumbers(int S)
{
    int n = (-1 + sqrt(1 + 8 * S)) / 2;
    int sum_n = (n * (n + 1)) / 2;
    if (sum_n == S)
        return n;
    return n - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n - maxUniqueNumbers(n + 1) << endl;
    }
}