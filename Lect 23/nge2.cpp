#include <bits/stdc++.h>

using namespace std;

int main()
{

    // TC O(N)
    // SC O(N)
    vector<int> arr = {5, 10, 2, 1, 7, 2, 3};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        arr.push_back(arr[i]);
    }

    vector<int> ans(2 * n, -1);
    // TC O(N)
    // SC O(N)
    stack<int> st;
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (st.size() != 0 and st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }

    // vector<int> finalans(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    ans.resize(n);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}