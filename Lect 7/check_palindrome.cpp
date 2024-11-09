#include <bits/stdc++.h>
using namespace std;


// SC - O(1)
void reverse_arr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}


// TC - > O(N)
// SC - > O(N)
void check_palindrome(int arr[], int n)
{
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    reverse_arr(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr2[i])
        {
            cout << "Not palindrome";
            return;
        }
    }
    cout << "Palindrome\n";
}
// TC- > O(N)
// SC- O(1)
void check_palin(int arr[], int n)
{

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - 1 - i])
        {
            continue;
        }
        else
        {
            cout << "NOt palindrome\n";
            return;
        }
    }
    cout << "Palindrome";
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

    check_palindrome(arr, n);
    check_palin(arr, n);
}