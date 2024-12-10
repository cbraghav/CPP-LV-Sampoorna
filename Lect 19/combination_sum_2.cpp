#include <bits/stdc++.h>
using namespace std;

// you can only use every element at any number of times

// void csum(vector<int> &element, vector<int> &ans, int idx, int target)
// {
//     if (target == 0)
//     {
//         for (auto i : ans)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//         return;
//     }

//     if (target < 0)
//         return;

//     if (idx == element.size())
//     {
//         return;
//     }

//     for (int i = 0;; i++)
//     {
//         int newtarget = target - element[idx] * i;
//         if (newtarget < 0)
//         {
//             break;
//         }
//         for (int j = 0; j < i; j++)
//         {
//             ans.push_back(element[idx]);
//         }

//         csum(element, ans, idx + 1, newtarget);

//         for (int j = 0; j < i; j++)
//         {
//             ans.pop_back();
//         }
//     }
// }

void csum(vector<int> &element, vector<int> &ans, int idx, int target)
{
    if (target == 0)
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    if (target < 0)
        return;

    if (idx == element.size())
        return;
    // not include
    csum(element, ans, idx + 1, target);
    // include -> dont inc idx -> you want to include that element again
    ans.push_back(element[idx]);
    csum(element, ans, idx, target - element[idx]);
    ans.pop_back();
}
int main()
{

    vector<int> element = {1, 2, 3, 7, 4};
    vector<int> ans;
    int target = 7;

    csum(element, ans, 0, target);
}