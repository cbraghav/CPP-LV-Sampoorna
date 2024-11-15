#include <bits/stdc++.h>
using namespace std;

// TC -> O(N)
// SC -> O(N)
int brute_force()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp[n];

    for (int i = 0; i < n - 1; i++)
    {
        temp[i] = arr[i + 1];
    }

    temp[n - 1] = arr[0];

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}

int main()
{
    // TC - > O(N)
    // SC -> O(1)
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}