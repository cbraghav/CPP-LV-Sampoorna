#include <bits/stdc++.h>
using namespace std;

int array_()
{
    vector<int> arr = {1, -4, -2, 3, -2, -6, -7, -9};

    vector<int> pos, neg;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    vector<int> ans;

    int i = 0; // pos
    int j = 0; // neg

    int k = 0;
    while (k < arr.size())
    {

        if (i < pos.size())
        {
            ans.push_back(pos[i]);
            i++;
            k++;
        }

        if (j < neg.size())
        {
            ans.push_back(neg[j]);
            j++;
            k++;
        }
    }

    for (auto i : ans)
        cout << i << " ";
}

int main()
{
    vector<int> arr = {1, -4, -2, 3, -2, -6, -7, -9};

    queue<int> pos, neg;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            pos.push(arr[i]);
        }
        else
        {
            neg.push(arr[i]);
        }
    }

    vector<int> ans;

    // int i = 0; // pos
    // int j = 0; // neg

    int k = 0;
    while (!pos.empty() or !neg.empty())
    {
        if (!pos.empty())
        {
            ans.push_back(pos.front());
            pos.pop();
        }

        if (!neg.empty())
        {
            ans.push_back(neg.front());
            neg.pop();
        }

        // if (i < pos.size())
        // {
        //     ans.push_back(pos[i]);
        //     i++;
        //     k++;
        // }

        // if (j < neg.size())
        // {
        //     ans.push_back(neg[j]);
        //     j++;
        //     k++;
        // }
    }

    for (auto i : ans)
        cout << i << " ";
}