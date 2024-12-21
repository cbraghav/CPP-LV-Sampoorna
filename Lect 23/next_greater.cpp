#include <bits/stdc++.h>

using namespace std;

// TC O(N^2)
int bf()
{

    int arr[7] = {5, 10, 2, 1, 7, 2, 3};
    int n = 7;
    vector<int> ans(n, -1); // ( size , value )

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                ans[i] = arr[j];
                break;
            }
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    int arr[7] = {5, 10, 2, 1, 7, 2, 3};
    int n = 7;
    vector<int> ans(n, -1);
    // TC O(N)
    // SC O(N)
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
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

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}