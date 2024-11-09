#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    //  triangle
    // int total_rows = (n + 1) / 2;
    // int row = 1;
    // while (row <= total_rows)
    // {
    //     int col = 1;
    //     int total_cols = row;
    //     while (col <= total_cols)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // // reverse triangle
    // total_rows = (n - 1) / 2;
    // row = 1;
    // while (row <= total_rows)
    // {
    //     int col = 1;
    //     int total_cols = total_rows - (row - 1);
    //     while (col <= total_cols)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //      *
    //     **
    //    ***

    // int total_rows = n;
    // int row = 1;
    // while (row <= total_rows)
    // {
    //     // star
    //     int total_cols = row - 1;
    //     int col = 1;
    //     while (col <= total_cols)
    //     {
    //         cout << " ";
    //         col++;
    //     }

    //     // circle
    //     total_cols = total_rows - (row - 1);
    //     col = 1;
    //     while (col <= total_cols)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int total_rows = n;
    // int row = 1;

    // while (row <= total_rows)
    // {

    //     int total_cols = row;
    //     int col = 1;
    //     while (col <= total_cols)
    //     {
    //         cout << col;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // n = 5;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i;
    //     i++;
    // }

    // int i = 5;
    // while (i > 0)
    // {
    //     cout << i;
    //     i--;
    // }

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE

    // int total_rows = n;
    // int row = 1;

    // while (row <= total_rows)
    // {

    //     int total_cols = row;
    //     int col = 1;
    //     while (col <= total_cols)
    //     {
    //         cout << char(('A' + row - 1) + col - 1);
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // while (row <= total_rows)
    // {

    //     int total_cols = 2 * row - 1;
    //     int col = 1;
    //     while (col <= total_cols)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // Triangle
    // int total_rows = 5;
    // for (int row = 1; row <= total_rows; row = row + 1)
    // {

    //     int total_cols = row;
    //     int col = 1;
    //     while (col <= total_cols)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     // for (int col = 1; col <= total_cols; col++)
    //     // {
    //     //     cout << "*";
    //     // }
    //     cout << endl;
    // }

    // Fibonaaci
    n = 10;
    int first = 0;
    int second = 1;
    int sum = 0;

    sum += first + second;
    cout << first << " " << second << " ";
    for (int i = 3; i <= n; i++)
    {
        int second = 5;
        int third = first + second;
        cout << second;
    }
    cout << sum << endl;
}