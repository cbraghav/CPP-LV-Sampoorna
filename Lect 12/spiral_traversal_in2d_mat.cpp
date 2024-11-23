#include <bits/stdc++.h>
using namespace std;

int main()
{
    // TC -> O(N*M)
    int n = 5, m = 6;
    // n -> number of rows;
    // m -> number of cols;
    int arr[n][m] = {
        {1, 2, 3, 4, 5, 71},
        {6, 7, 8, 9, 10, 72},
        {11, 12, 13, 14, 15, 73},
        {16, 17, 18, 19, 20, 74},
        {21, 22, 23, 24, 25, 75}};

    int top_row = 0;
    int bot_row = n - 1;
    int left_col = 0;
    int rig_col = m - 1;
    // step 5-> repeat steps 1->4
    while (top_row <= bot_row && left_col <= rig_col)
    {
        // step 1 -> for top row -> print cols from left to right
        for (int j = left_col; j <= rig_col; j++)
        {
            cout << arr[top_row][j] << " ";
        }
        top_row++;
        // step 2 -> for right col -> print from top to bot
        for (int i = top_row; i <= bot_row; i++)
        {
            cout << arr[i][rig_col] << " ";
        }
        rig_col--;
        // step 6
        if (top_row <= bot_row)
        {
            // step 3 -> for bot row -> print cols from right to left
            for (int j = rig_col; j >= left_col; j--)
            {
                cout << arr[bot_row][j] << " ";
            }
            bot_row--;
        }
        // step 6
        if (left_col <= rig_col)
        {
            // step 4 -> for left col -> print from bot to top
            for (int i = bot_row; i >= top_row; i--)
            {
                cout << arr[i][left_col] << " ";
            }
            left_col++;
        }
    }
}