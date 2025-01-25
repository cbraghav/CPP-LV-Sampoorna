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

void PreorderTraversal(Node *curr)
{

    if (curr == NULL)
    {
        return;
    }
    // C L R
    cout << curr->data << " ";
    PreorderTraversal(curr->left);
    PreorderTraversal(curr->right);
}

// TC O(N)
// SC O(1)

int MaxSumPath(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }

    int Sumfromleft = MaxSumPath(root->left, ans);
    int Sumfromright = MaxSumPath(root->right, ans);
    int currsum = root->data + Sumfromleft + Sumfromright;
    ans = max(ans, currsum);

    return max(Sumfromleft, Sumfromright) + root->data;
}
bool isLeaf(Node *root)
{
    if (root->left == NULL and root->right == NULL)
    {
        return true;
    }
    return false;
}
void trav_left_boundary(Node *root, vector<int> &ans)
{

    Node *curr = root->left;
    while (curr != NULL)
    {
        if (isLeaf(curr) == true)
        {
            break;
        }
        else
        {
            ans.push_back(curr->data);
            if (curr->left != NULL)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
    }
}

void trav_leaf(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    if (isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }

    trav_leaf(root->left, ans);
    trav_leaf(root->right, ans);
    return;
}

void trav_right_boundary(Node *root, vector<int> &ans)
{
    Node *curr = root->right;
    vector<int> temp;
    while (curr != NULL)
    {
        if (isLeaf(curr))
        {
            break;
        }
        else
        {
            temp.push_back(curr->data);
            if (curr->right != NULL)
            {

                curr = curr->right;
            }
            else
            {
                curr = curr->left;
            }
        }
    }
    reverse(temp.begin(), temp.end());
    for (auto i : temp)
    {
        ans.push_back(i);
    }
    return;
}
// TC O(N)
// SC O(N)
void boundary_traversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    vector<int> ans;
    ans.push_back(root->data);
    // left boundary
    trav_left_boundary(root, ans);
    // leafs
    trav_leaf(root, ans);
    // right bounday ( reverse)
    trav_right_boundary(root, ans);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

// TC O(N)
Node *LCA(Node *root, int p, int q)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == p)
    {
        return root;
    }
    if (root->data == q)
    {
        return root;
    }

    Node *left = LCA(root->left, p, q);
    Node *right = LCA(root->right, p, q);

    if (left != NULL and right != NULL)
    {
        return root; // this is LCA
    }
    else if (left == NULL)
    {
        return right;
    }
    else
    {
        return left;
    }
}

Node *treeconstruct(int n, vector<int> v, int idx)
{
    if (idx >= n)
    {
        return NULL;
    }
    if (v[idx] == -1)
    {
        return NULL;
    }

    Node *curr = new Node();
    curr->data = v[idx];

    curr->left = treeconstruct(n, v, 2 * idx + 1);
    curr->right = treeconstruct(n, v, 2 * idx + 2);

    return curr;
}
void levelOrderTraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);

    while (q.size() != 0)
    {
        Node *curr = q.front();
        q.pop();
        if (curr != NULL)
        {
            cout << curr->data << " ";
            q.push(curr->left);
            q.push(curr->right);
        }
    }
    cout << endl;
}

int diameterofBT(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = MaxSumPath(root->left, ans);
    int rh = MaxSumPath(root->right, ans);
    int currdia = 1 + lh + rh;
    ans = max(ans, currdia);

    return max(lh, rh) + 1;
}

Node *deleteLeaf(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    // leaf node h
    if (root->left == NULL and root->right == NULL)
    {
        delete root;
        return NULL;
    }

    // leaf node nahi h
    root->left = deleteLeaf(root->left);
    root->right = deleteLeaf(root->right);
    return root;
}
int main()
{

    int n;
    // cin >> n;

    vector<int> arr = {0, 1, 2, -1, 4, 5, 6, -1, -1, -1, 9};
    n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     arr.push_back(x);
    // }
    Node *root = treeconstruct(n, arr, 0);

    levelOrderTraversal(root);

    root = deleteLeaf(root);
    levelOrderTraversal(root);
    // PreorderTraversal(root);
}