#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "(9+2)*((x+y)+(x+2)+((x+4)+(x+3)))";

    int cnt = 0, ans = 0;

    for (auto i : s)
    {
        if (i == '(')
        {
            cnt++;
        }
        else if (i == ')')
        {
            cnt--;
        }

        ans = max(ans, cnt);
    }
    cout << ans << endl;
}