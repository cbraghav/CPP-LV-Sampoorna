#include <bits/stdc++.h>
using namespace std;

int main()
{

    // find min value in an array;

    // // int ans = INT_MAX;
    // long long ans = LLONG_MAX;
    // int ans_max = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i] < ans)
    //     {
    //         ans = arr[i];
    //     }

    //     if (arr[i] > ans_max)
    //     {
    //         ans_max = arr[i];
    //     }
    // }

    // cout << "min value in this array is " << ans << endl;
    // cout << "max value in array is " << ans_max << endl;

    // find the element in an array
    // int arr[10] = {12, 423, 43, 5, 7, 43, 1, 54, 19, 534};
    // int x = 43;
    // bool found = false;
    // int foundat[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    // int counter = 0;
    // for (int i = 0; i < 10; i++)
    // {

    //     if (x == arr[i])
    //     {
    //         found = true;
    //         foundat[counter] = i;
    //         counter++;
    //     }
    // }
    // if (found == true)
    // {
    //     cout << " element found at ";

    //     for (int i = 0; i < 10; i++)
    //     {
    //         if (foundat[i] != -1)
    //         {
    //             cout << foundat[i] << " ";
    //         }
    //     }
    // }
    // else
    // {
    //     cout << "element not found ";
    // }

    // Reverse an array using temp arr

    // int arr[10] = {12, 423, 43, 5, 7, 43, 1, 54, 19, 534};

    // int rarr[10];
    // int j = 0;

    // for (int i = 9; i >= 0; i--)
    // {

    //     rarr[j] = arr[i];
    //     j++;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i] = rarr[i];
    //     cout << arr[i] << " ";
    // }

    // for (int i = 0; i < 5; i++) // n/2
    // {

    //     swap(arr[i], arr[10 - 1 - i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Find unique element in an array

    int arr[10] = {12, 423, 43, 5, 7, 43, 5, 12, 423, 0};

    for (int i = 0; i < 10; i++)
    {
        int found = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                found = 1;
            }
        }
        if (found == 0)
        {
            cout << arr[i] << " ";
        
        }
    }
}