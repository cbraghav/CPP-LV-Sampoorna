#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {5, 1, 4, 2, 5, 8, 3};

    for (int i = 0; i < n; i++)
    {
        int j = i;
        // j-1>=0
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }

        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
            if (k == i)
            {
                cout << " | ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}