#include <bits/stdc++.h>
using namespace std;

void insert_in_arry(int arr[], int n, int elem, int idx)
{

    int newarr[n + 1];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == idx - 1)
        {
            newarr[j] = elem;
            j++;
        }

        newarr[j] = arr[i];
        j++;
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << newarr[i] << " ";
    }
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

    int elem, idx;
    cin >> elem >> idx;

    insert_in_arry(arr, n, elem, idx);
}