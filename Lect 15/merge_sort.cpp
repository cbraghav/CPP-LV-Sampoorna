#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int lo, int mid, int hi)
{

    vector<int> A1, A2, T;

    for (int i = lo; i <= mid; i++)
    {
        A1.push_back(v[i]);
    }
    for (int i = mid + 1; i <= hi; i++)
    {
        A2.push_back(v[i]);
    }

    int i = 0, j = 0;

    while (i < A1.size() && j < A2.size())
    {
        if (A1[i] < A2[j])
        {
            T.push_back(A1[i]);
            i++;
        }
        else
        {
            T.push_back(A2[j]);
            j++;
        }
    }
    while (i < A1.size())
    {
        T.push_back(A1[i]);
        i++;
    }
    while (j < A2.size())
    {
        T.push_back(A2[j]);
        j++;
    }
    j = 0;
    for (int i = lo; i <= hi; i++)
    {
        v[i] = T[j];
        j++;
    }
}
void merge_sort(vector<int> &v, int lo, int hi)
{

    // base case
    if (lo >= hi)
    {
        return;
    }

    int mid = (lo + hi) / 2;

    merge_sort(v, lo, mid);     // sort left
    merge_sort(v, mid + 1, hi); // sort right
    merge(v, lo, mid, hi);
}

void print_arr(vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
}
int main()
{
    vector<int> v = {5, 21, 358, 1, 67, 9, 1, 3};
    int n = v.size();
    merge_sort(v, 0, n - 1);

    print_arr(v);
}