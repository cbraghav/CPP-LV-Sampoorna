#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3, m = 5;
    // n -> number of rows;
    // m -> number of cols;
    int arr[n][m] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // zig zag traversal
    for (int i = 0; i < n; i++) // iterate over row
    {
        if (i % 2 == 0)
        {

            for (int j = 0; j < m; j++) // iterate over cols -> seedhe
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = m - 1; j >= 0; j--) // iterate over cols -> ulte
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}