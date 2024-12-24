#include <bits/stdc++.h>
using namespace std;

// TC O(1) and SC O(1)
class MinStack
{
    stack<int> st;
    int mn; // min value

public:
    // TC -> O(1)
    int get_min()
    {
        return mn;
    }

    // O(1)
    void push(int x)
    {
        if (st.size() == 0)
        {
            st.push(x);
            mn = x;
        }
        else
        {
            if (x < mn) // 2  < 5
            {
                st.push(2 * x - mn); // 2*2 -5   -> -1
                mn = x;
            }
            else
            { // 7 </ 5

                st.push(x);
            }
        }
    }
    // O(1)
    void pop()
    {
        if (st.size() == 0)
            return;
        int tp = st.top();
        st.pop();
        // top update hogya

        // min update krna h // left case me // choti value ayi thi
        if (tp < mn)
        {
            mn = 2 * mn - tp;
        }
    }
    // O(1)
    int top()
    {
        if (st.size())
        {
            return INT_MAX;
        }

        int tp = st.top();

        if (tp < mn)
        {
            return mn;
        }
        else
        {
            return tp;
        }
    }
};

// // SC -> O(N)
// class MinStack
// {
//     stack<pair<int, int>> st; // val , min

// public:
//     // TC -> O(1)
//     int get_min()
//     {
//         return st.top().second;
//     }

//     // O(1)
//     void push(int x)
//     {
//         if (st.size() == 0)
//         {
//             st.push({x, x});
//         }
//         else
//         { // x , min
//             st.push({x, min(x, get_min())});
//         }
//     }
//     // O(1)
//     void pop()
//     {
//         st.pop();
//     }
//     // O(1)
//     int top()
//     {
//         return st.top().first;
//     }
// };

// class MinStack
// {
//     stack<int> st;

// public:
//     // TC -> O(N) SC- >O(N)
//     int get_min()
//     {
//         stack<int> cpy;

//         int mn = INT_MAX;
//         while (st.size())
//         {
//             mn = min(mn, st.top());
//             cpy.push(st.top());
//             st.pop();
//         }

//         while (cpy.size())
//         {
//             st.push(cpy.top());
//             cpy.pop();
//         }
//         return mn;
//     }

//     // O(1)
//     void push(int x)
//     {
//         st.push(x);
//     }
//     // O(1)
//     void pop()
//     {
//         st.pop();
//     }
//     // O(1)
//     int top()
//     {
//         return st.top();
//     }
// };

int main()
{
    MinStack mst;
}