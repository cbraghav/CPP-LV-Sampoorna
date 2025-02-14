#include <bits/stdc++.h>

using namespace std;

int main()
{

    // priority_queue<int> pq; // desc

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // ascending

    pq.push(5);
    pq.push(4);
    pq.push(6);
    pq.push(7);
    pq.push(3);

    cout << pq.top() << " first element\n";
    pq.pop();
    cout << pq.top() << " 2nd  element\n";
    pq.pop();

    cout << pq.top() << " 3rd  element\n";
    pq.pop();

    cout << pq.top() << " 4th  element\n";
    pq.pop();

    cout << pq.top() << " 5th  element\n";
    pq.pop();
}