#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;  // left child
    Node *right; // right child

    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
    Node(int data, Node *left, Node *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

void PreorderTraversal(Node *curr, int &count)
{

    if (curr == NULL)
    {
        return;
    }
    // C L R
    cout << curr->data << " ";
    count++;
    PreorderTraversal(curr->left, count);
    PreorderTraversal(curr->right, count);
}

bool searchinBT(Node *curr, int &ele)
{

    if (curr == NULL)
    {
        return false;
    }

    if (curr->data == ele)
    {
        return true;
    }
    // C L R
    // cout << curr->data << " ";
    bool foundleft = searchinBT(curr->left, ele);
    bool foundright = searchinBT(curr->right, ele);
    // return foundleft or foundright;
    if (foundleft == true)
    {
        return true;
    }
    if (foundright == true)
    {
        return true;
    }

    return false;
}
// TC O(N)
// SC O(1)
bool isIdenticalBTs(Node *r1, Node *r2)
{
    if (r1 == NULL and r2 == NULL)
    {
        //  both are null
        return true;
    }

    if (r1 == NULL or r2 == NULL)
    {
        // either one is null
        return false;
    }

    // both are not null

    // if (r1->data == r2->data)
    // {
    //     return isIdenticalBTs(r1->left, r2->left) and
    //            isIdenticalBTs(r1->right, r2->right);
    // }
    // else
    // {
    //     return false;
    // }

    return (r1->data == r2->data) and
           isIdenticalBTs(r1->left, r2->left) and
           isIdenticalBTs(r1->right, r2->right);
}

void ZigZagBT(Node *root)
{
    int level = 0;
    queue<Node *> q;
    q.push(root);

    while (q.size())
    {

        vector<int> elements;
        queue<Node *> nq;
        int currzie = q.size();
        // to proccess current level
        // while (q.size())
        while (currzie--)
        {
            Node *front = q.front();
            q.pop();
            elements.push_back(front->data);

            if (front->left)
            {
                // nq.push(front->left);

                q.push(front->left);
            }
            if (front->right)
            {
                // nq.push(front->right);
                q.push(front->right);
            }
        }
        // q = nq;
        if (level % 2 == 1)
        {
            reverse(elements.begin(), elements.end());
        }
        for (auto i : elements)
        {
            cout << i << " ";
        }
        cout << endl;

        level++;
    }
}
// TC O(N)
// SC O(N)
void TopView_inBT(Node *root)
{
    int level = 0;
    queue<pair<Node *, int>> q; // Node , x
    q.push({root, 0});

    map<int, int> mp; // x and data
    while (q.size())
    {

        int currzie = q.size();
        // to proccess current level
        // while (q.size())
        while (currzie--)
        {
            Node *front = q.front().first;
            int x = q.front().second;
            q.pop();
            // cout << front->data << " ";
            if (mp.find(x) == mp.end())
            {
                // is line pe , is x ka node first time mila h
                mp[x] = front->data;
            }
            if (front->left)
            {
                // nq.push(front->left);
                q.push({front->left, x - 1});
            }
            if (front->right)
            {
                // nq.push(front->right);
                q.push({front->right, x + 1});
            }
        }
        // cout << endl;
    }

    // vector<int> ans;
    for (auto i : mp)
    {
        cout << "key : " << i.first << " and data : " << i.second << endl;
        // ans.push_back(i.second);
    }
}

// TC O(N)
// SC O(N)
void BottomView_inBT(Node *root)
{
    int level = 0;
    queue<pair<Node *, int>> q; // Node , x
    q.push({root, 0});

    map<int, int> mp; // x and data
    while (q.size())
    {

        int currzie = q.size();
        // to proccess current level
        // while (q.size())
        while (currzie--)
        {
            Node *front = q.front().first;
            int x = q.front().second;
            q.pop();
            // cout << front->data << " ";

            mp[x] = front->data;

            if (front->left)
            {
                // nq.push(front->left);
                q.push({front->left, x - 1});
            }
            if (front->right)
            {
                // nq.push(front->right);
                q.push({front->right, x + 1});
            }
        }
        // cout << endl;
    }

    // vector<int> ans;
    for (auto i : mp)
    {
        cout << "key : " << i.first << " and data : " << i.second << endl;
        // ans.push_back(i.second);
    }
}

void LeftViewBT(Node *root)
{
    int level = 0;
    queue<Node *> q;
    q.push(root);

    vector<int> leftveiw;

    while (q.size())
    {
        int firsttime = 0;
        int val;
        int currzie = q.size();
        // to proccess current level
        while (currzie--)
        {
            Node *front = q.front();
            q.pop();
            //
            if (firsttime == 0)
            {
                val = front->data;
            }
            firsttime = 1;
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }

        leftveiw.push_back(val);
    }

    for (auto i : leftveiw)
    {
        cout << i << " ";
    }
}
void RightViewBT(Node *root)
{
    int level = 0;
    queue<Node *> q;
    q.push(root);

    vector<int> rightveiw;

    while (q.size())
    {
        int val;
        int currzie = q.size();
        // to proccess current level
        while (currzie--)
        {
            Node *front = q.front();
            q.pop();
            //

            val = front->data;
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }

        rightveiw.push_back(val);
    }

    for (auto i : rightveiw)
    {
        cout << i << " ";
    }
}

void LeftViewDFS(Node *curr, int level, map<int, int> &ans) // map<int,int>  level , data
{

    if (curr == NULL)
    {
        return;
    }

    // CLR
    if (ans.find(level) == ans.end())
    {
        // is level ke liye koi entry nahi h
        // first time element mila

        ans[level] = curr->data;
    }

    LeftViewDFS(curr->left, level + 1, ans);
    LeftViewDFS(curr->right, level + 1, ans);
}

void RightViewDFS(Node *curr, int level, map<int, int> &ans) // map<int,int>  level , data
{

    if (curr == NULL)
    {
        return;
    }

    // CRL
    if (ans.find(level) == ans.end())
    {
        // is level ke liye koi entry nahi h
        // first time element mila

        ans[level] = curr->data;
    }

    RightViewDFS(curr->right, level + 1, ans);

    RightViewDFS(curr->left, level + 1, ans);
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(9);
    int count = 0;
    // PreorderTraversal(root, count);

    // cout << endl;
    // cout << "total numebr of elements are : " << count << endl;

    // cout << "are trees identical: " << isIdenticalBTs(NULL, NULL) << endl;

    // LeftViewBT(root);
    // cout << endl;
    // RightViewBT(root);
    ;

    map<int, int> ans;
    int level = 0;

    RightViewDFS(root, level, ans);

    for (auto i : ans)
    {
        cout << "level " << i.first << " data" << i.second << endl;
    }
}