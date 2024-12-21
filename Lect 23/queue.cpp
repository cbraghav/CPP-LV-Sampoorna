#include <bits/stdc++.h>
using namespace std;

class myqueue
{
private:
    vector<int> arr;
    int sz = 10;
    int i = -1;
    int j = -1;

public:
    myqueue()
    {
        // arr.resize(sz);
    }
    void push(int x)
    {
        if (j == sz - 1)
        {
            cout << "stack already full" << endl;
            return;
        }
        if (j == -1)
        {
            i = 0; // to make it point to the first element
        }
        j = j + 1;
        arr.push_back(x);
        // arr[j] = x;
        return;
    }

    void pop()
    {
        if (i > j or i == -1)
        {
            cout << "queue empty" << endl;
            return;
        }
        i = i + 1;
        return;
    }

    int front()
    {
        if (i > j or i == -1)
        {
            cout << "queue empty" << endl;
            return INT_MAX;
        }
        return arr[i];
    }
};

int main()
{
    myqueue q;

    q.pop();
    q.front();
    q.push(1);
    cout << q.front() << endl;
    q.push(2);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
}