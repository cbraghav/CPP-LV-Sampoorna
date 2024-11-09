#include <bits/stdc++.h>
using namespace std;

// pass array as an unsized array argument
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
// pass an array as a pointer argument
void printarrptr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << endl;
    }
}

int main()
{
    int n = 10;
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int m = sizeof(x) / sizeof(x[0]);
    cout << m << endl;
    // x[5] = 125;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << x[i] << endl;
    // }
    // x[5] = 30;

    x[0] = 'a';

    printarr(x, n);
    printarrptr(x, n);
    // cout << x[0] << endl; //  value of first element of array
    // cout << &x[0] << endl;   // addrs of first element of array
    // cout << x << endl;   // addr of first element of array
    // cout << *x << endl;  // value of first element of array
    // cout << *(x + 1) << endl;    // value of 2nd elemnt of array
    // cout << *(x + 5) << endl;    // value of 6th elemnt of array
    // cout << x[5] << endl;    // value of 6th element of array
}