#include <bits/stdc++.h>
using namespace std;

int print(string s)
{
    cout << s << endl;
    return 0;
}

int main()
{

    string s;
    cin >> s; // to input single word
    // getline(cin, s); // to input complete line

    // cout << s.size() << endl;

    // // cout << s;
    // print(s);

    // s.length();
    // s.begin()
    // s.end();
    s.push_back('0');
    s.push_back('0');
    s.push_back('0');
    s.push_back('0');
    cout << s << endl;
}