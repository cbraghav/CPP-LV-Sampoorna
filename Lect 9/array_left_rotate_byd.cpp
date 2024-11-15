#include <bits/stdc++.h>
using namespace std;
int reverse_arr(int arr[], int n, int low, int high)
{
    // for (int i = 0; i < n / 2; i++) // n/2
    // {

    //     swap(arr[i], arr[n - 1 - i]);
    // }

    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    return 0;
}
int main()
{
    // TC - > O(N)
    // SC -> O(1)
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 3;
 
    reverse_arr(arr, n, 0, d - 1);
    reverse_arr(arr, n, d, n - 1);
    reverse_arr(arr, n, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}