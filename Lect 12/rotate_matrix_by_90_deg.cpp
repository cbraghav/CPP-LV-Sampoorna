#include <bits/stdc++.h>
using namespace std;

int bf()
{
    // TC -> O(N*M)
    // SC -> O(N*M)
    int n = 5, m = 5;
    // n -> number of rows;
    // m -> number of cols;
    int old[n][m] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int new_mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            new_mat[j][n - 1 - i] = old[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << new_mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    // TC -> O(N*M)
    // SC -> O(1)
    int n = 5, m = 5;
    // n -> number of rows;
    // m -> number of cols;
    int old[n][m] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    // step 1-> transpose of matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(old[i][j], old[j][i]);
        }
    }

    // step 2 -> reverse every row

    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < m; j++)
        // {

        // }
        // reverse
        for (int j = m - 1; j >= 0; j--)
        {
            cout << old[i][j] << " ";
        }
        cout << endl;
    }
}