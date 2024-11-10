#include <bits/stdc++.h>
// #include <vector>
// #include <set>
using namespace std;

void f_pairs()
{

    pair<int, char> p = {1, 'a'};

    cout << p.first << " " << p.second << endl;
    //
    pair<pair<char, char>, pair<int, int>> p2 = {{'a', 'b'}, {2, 3}};

    cout << p2.first.first << " " << p2.first.second << " " << p2.second.first << " " << p2.second.second;
    pair<string, string> name = {"Raghav", "Aggarwal"};

    cout << name.first << " " << name.second << endl;
    pair<string, string> names[] = {{"Raghav", "Aggarwal"}, {"Coding", "Blocks"}};

    cout << names[0].first << " " << names[0].second << " " << names[1].first << " " << names[1].second << endl;
}

void f_vectors()
{

    vector<int> v(5);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout << "new size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // begin() - > return pointer to first element
    cout << "begin() " << *v.begin() << endl;

    // end() -> next pointer to last element
    cout << "end()" << *(--v.end()) << endl;

    // rbegin() -> last element

    cout << "rbegin() " << *(v.rbegin()) << endl;

    //
    cout << "rend()" << *(--v.rend()) << endl;

    // size()

    // empty();

    cout << "empty" << v.empty() << endl;

    // pop_back()  -> remove last elemnt;

    v.pop_back();
    v.pop_back();
    cout << v.size();
    cout << "last element " << *(v.rbegin()) << endl;
    // v.insert( iterator , value)
    v.insert(v.begin() + 4, 10);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // v.erase
    v.erase(v.begin());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    // clear() delete all elements
    // v.clear();
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    cout << vp[0].first << vp[0].second << endl;

    vector<int>::iterator it = v.begin();
    auto it2 = v.begin();

    cout << *it << endl;
    cout << " print vector using iterators ";
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // for_each loop
    cout << "print using for each loop ";
    for (auto &i : v)
    {
        i = 11;
        cout << i << " ";
    }

    cout << "print using for each loop after editing ";
    for (auto i : v)
    {
        cout << i << " ";
    }
}

void f_queue()
{

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;

    // q.size();
    // q.empty(); - > return if queue is empty or not
    // cout << q.back() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void f_stack()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

// store only unique elemnts
void f_set()
{

    set<int> st; // ascending order
    // set<int, greater<int>> st; // descending

    st.insert(15);
    st.insert(15);
    st.insert(15);
    st.insert(15);
    st.insert(15);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    st.insert(10);
    st.insert(12);
    st.insert(3);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    auto it = st.find(214);
    if (it == st.end())
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << *it << endl;
    }
    st.insert(11);

    cout << *st.lower_bound(9) << endl;
    cout << *st.upper_bound(9) << endl;
    ;
    // begin();
    // end() ;
    // size();
    // empty();
}
// multiset
void f_multiset()
{

    multiset<int> st;
    st.insert(10);
    st.insert(15);
    st.insert(15);
    st.insert(15);
    st.insert(155);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
}

void f_unordered_set()
{

    unordered_set<int> st;
    st.insert(12431);
    st.insert(241);
    st.insert(10);
    st.insert(19);
    st.insert(4);

    for (auto i : st)
    {
        cout << i << " ";
    }
    if (st.find(10) == st.end())
    {
        cout << "element not found";
    }
    else
    {
        cout << "element found";
    }
}

void f_deque()
{

    deque<int> dq;

    dq.push_back(10);
    dq.push_front(15);

    cout << dq.front();

    cout << dq.back();
    dq.pop_back();
    dq.pop_front();
}

void f_map()
{
    // KEY VAlue
    map<string, int> age;

    age["Raghav"] = 18;
    age["Ayush"] = 10;
    age["yuvraj"] = 12;
    age["Raghav"] = 17;
    cout << age["Raghav"] << endl;

    map<pair<int, int>, string> mp1;
    mp1[{1, 2}] = "ABC";
    mp1[{2, 3}] = "DEF";
    mp1.insert({{1, 3}, "xyz"});
    cout << mp1[{1, 2}];

    // map<string, int>::iterator it = age.begin();
    auto it = age.begin();
    cout << it->first << it->second << endl;

    // age.erase
    // clear
}

void f_pq()
{

    priority_queue<int> pq;

    pq.push(10);

    pq.push(10);

    pq.push(5);

    pq.push(20);

    pq.push(12);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    // f_pairs();
    // f_vectors();
    // f_queue();
    // f_stack();
    // f_deque();

    // f_set();
    // f_multiset();
    // f_unordered_set();
    // f_map();
    f_pq();
}