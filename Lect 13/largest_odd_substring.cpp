#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "1253468";

    string ans;
    bool found_odd = false;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        // if (s[i] == '1' or s[i] == '3' or s[i] == '5' or s[i] == '9' or s[i] == '7')
        // {
        //     found_odd = true;
        // }
        if (s[i] % 2 == 1 and s[i] >= '0' and s[i] <= '9')
        {
            found_odd = true;
        }

        if (found_odd == true)
        {
            ans.push_back(s[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout
        << ans << endl;
}