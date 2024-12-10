#include <bits/stdc++.h>
using namespace std;

// TC -> O (2^n)
// SC -> O(n)
void print_subs(string &s, string &ans, int i)
{

    if (i == s.size())
    {
        cout << ans << endl;
        return;
    }

    // for i -> i have two choices

    //// not include

    print_subs(s, ans, i + 1);

    // include
    ans.push_back(s[i]);
    print_subs(s, ans, i + 1);
    ans.pop_back();
}

void print_subs_array(vector<int> &s, vector<int> &ans, int i)
{

    if (i == s.size())
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    // for i -> i have two choices

    //// not include

    print_subs_array(s, ans, i + 1);

    // include
    ans.push_back(s[i]);
    print_subs_array(s, ans, i + 1);
    ans.pop_back();
}

int main()
{

    string s = "def";
    string ans = "";
    vector<int> v{1, 2, 3, 4}, ans2;
    print_subs(s, ans, 0);

    print_subs_array(v, ans2, 0);
}