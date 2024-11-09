#include <bits/stdc++.h>
using namespace std;

// O(N ^ 2) Time Comp
void check_sorted_brute_force(int arr[], int n)
{
    // check each element->it should be smaller than every element after it
    for (int i = 0; i < n; i++)
    { // check each element
        int curr_element = arr[i];

        for (int j = i + 1; j < n; j++)
        { // element after i
            int element_after = arr[j];
            if (curr_element <= element_after)
            {
                continue;
            }
            else
            {
                cout << "Array is not sorted\n";
                return;
            }
        }
    }
    cout << "Array is sorted";
}

// O(N)
void check_sorted_optimised(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            continue;
        }
        else
        {
            cout << "Array is not sorted";
            return;
        }
    }
    cout << "Array is sorted";
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

    check_sorted_brute_force(arr, n);
    check_sorted_optimised(arr, n);
}