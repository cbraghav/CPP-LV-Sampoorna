#include <bits/stdc++.h>
using namespace std;

int main()
{
    // TC -> O(N)
    string s = "i love coding blocks";
    vector<string> words;
    string word;
    // s.push_back(' ');

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            word.push_back(s[i]);
        }
        else
        { // space
            words.push_back(word);
            word = "";
        }
    }

    words.push_back(word);

    reverse(words.begin(), words.end());
    // for (auto i : words)
    // {
    //     cout << i << " ";
    // }
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i];
        if (i < words.size() - 1)
        {
            cout << " ";
        }
    }
}