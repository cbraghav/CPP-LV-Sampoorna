#include <bits/stdc++.h>
using namespace std;

// using 2 for loops  // O(N)
void find_2nd_max(int arr[], int n)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }
    cout << "max element is " << max1 << endl;
    // 1 2 3 4 5 5
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    cout << "second max element is " << max2 << endl;
}

// using single for loop
void find_second_max(int arr[], int n)
{

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        // curr element is greater than both
        if (arr[i] > max1 && arr[i] > max2)
        {
            max2 = max1;
            max1 = arr[i];
        }
        // curr elemetn is less than max1 but greater than max1
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    cout << "max element is " << max1 << endl;
    cout << "second max element is " << max2 << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    find_2nd_max(arr, n);
    find_second_max(arr, n);
}