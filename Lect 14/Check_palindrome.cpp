#include <bits/stdc++.h>
using namespace std;

bool checkPalind(string &s, int &i)
{
    int N = s.size();
    // base case
    if (i >= N / 2)
    {
        return true;
    }

    if (s[i] == s[N - 1 - i])
    {
        i++;
        return checkPalind(s, i);
    }
    return false;
}

bool checkPalind(string &s, int i, int j)
{
    // base
    if (i > j)
    {
        return true;
    }

    if (s[i] == s[j])
    {
        return checkPalind(s, i + 1, j - 1);
    }
    return false;
}

int main()
{

    string s = "naman";
    int i = 0;
    cout << checkPalind(s, i) << endl;
    cout << checkPalind(s, 0, s.size() - 1) << endl;
}