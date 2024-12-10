#include <bits/stdc++.h>
using namespace std;

bool isvalid(vector<vector<int>> &v, int r, int c, int val)
{
    // validate row
    for (int j = 0; j < 9; j++)
    {
        if (v[r][j] == val)
        {
            return false;
        }
    }

    // validate col
    for (int i = 0; i < 9; i++)
    {
        if (v[i][c] == val)
        {
            return false;
        }
    }

    int fr = (3 * (r / 3));
    int fc = (3 * (c / 3));
    // validate smaller 3*3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[fr + i][fc + j] == val)
            {
                return false;
            }
        }
    }

    return true;
}
bool solve(vector<vector<int>> &v)
{

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (v[i][j] != 0)
            {
                continue;
            }
            for (int k = 1; k <= 9; k++)
            {
                // try to put v[i][j] = k

                if (isvalid(v, i, j, k))
                {
                    v[i][j] = k;
                    if (solve(v))
                    {
                        return true;
                    }
                    v[i][j] = 0;
                }
            }
        }
    }

    return false;
}
int main()
{

    int n = 9;
    vector<vector<int>> sudoku = {{0, 0, 0, 2, 6, 0, 7, 0, 1},
                                  {6, 8, 0, 0, 7, 0, 0, 9, 0},
                                  {1, 9, 0, 0, 0, 4, 5, 0, 0},
                                  {8, 2, 0, 1, 0, 0, 0, 4, 0},
                                  {0, 0, 4, 6, 0, 2, 9, 0, 0},
                                  {0, 5, 0, 0, 0, 3, 0, 2, 8},
                                  {0, 0, 9, 3, 0, 0, 0, 7, 4},
                                  {0, 4, 0, 0, 5, 0, 0, 3, 6},
                                  {7, 0, 3, 0, 1, 8, 0, 0, 0}};

    solve(sudoku);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}