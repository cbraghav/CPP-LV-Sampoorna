#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s = "[{()}(]";

    stack<char> st;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '(') or (s[i] == '[') or (s[i] == '{'))
        {
            // opening h

            st.push(s[i]);
        }
        else
        {
            if (st.size() == 0)
            {
                cout << "not balanced" << endl;
                return 0;
            }
            if (s[i] == ')' and st.top() == '(')
            {
                st.pop();
            }
            else if (s[i] == ']' and st.top() == '[')
            {
                st.pop();
            }
            else if (s[i] == '}' and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                cout << "not balanced" << endl;
                return 0;
            }
        }
    }
    cout << "balanced" << endl;
    return 0;
}