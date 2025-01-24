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

void InorderTraversal(Node *curr)
{

    if (curr == NULL)
    {
        return;
    }
    // L C  R
    InorderTraversal(curr->left);
    cout << curr->data << " ";
    InorderTraversal(curr->right);
}

void PostorderTraversal(Node *curr)
{

    if (curr == NULL)
    {
        return;
    }
    // L R C
    PostorderTraversal(curr->left);
    PostorderTraversal(curr->right);
    cout << curr->data << " ";
}

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);
    int level = 0;

    // while (q.size() != 0)
    // {
    //     cout << level << " : ";

    //     int sz = q.size();
    //     // proccess curr level
    //     for (int i = 0; i < sz; i++)
    //     {
    //         Node *curr = q.front();
    //         q.pop();
    //         cout << curr->data << " ";
    //         if (curr->left != NULL)
    //             q.push(curr->left);
    //         if (curr->right != NULL)
    //             q.push(curr->right);
    //     }
    //     cout << endl;
    //     level++;

    // }

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
}

int findDepth_usingBFS(Node *root)
{

    queue<Node *> q;
    q.push(root);
    int level = 0;

    while (q.size() != 0)
    {

        int sz = q.size();
        // proccess curr level
        for (int i = 0; i < sz; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        level++;
    }
    return level;
}

int findDepth_usingDFS(Node *curr)
{
    if (curr == NULL)
    {
        return 0;
    }

    // 1 itself + max( left depth , righ depth)

    int leftdepth = findDepth_usingDFS(curr->left);
    int rightdepth = findDepth_usingDFS(curr->right);

    int mydepth = 1 + max(leftdepth, rightdepth);
    return mydepth;
}

void findDepth_usingcounter(Node *curr, int counter, int &ans)
{

    if (curr == NULL)
    {
        ans = max(ans, counter);
        return;
    }
    counter++;
    // go left
    if (curr->left != NULL)
        findDepth_usingcounter(curr->left, counter, ans);

    // go right
    if (curr->right != NULL)
        findDepth_usingcounter(curr->right, counter, ans);

    ans = max(ans, counter);
}
// O(N^2)
bool check_Balanced_BT(Node *root)
{

    if (root == NULL)
    {
        return true;
    }

    int leftdepth = findDepth_usingDFS(root->left); // O(N)

    int rightdepth = findDepth_usingDFS(root->right); // O(N)

    int diff = abs(leftdepth - rightdepth);
    if (diff <= 1 and check_Balanced_BT(root->left) and check_Balanced_BT(root->right))
    {
        return true;
    }

    return false;
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

    // PreorderTraversal(root);
    // cout << endl;
    // InorderTraversal(root);
    // cout << endl;
    // PostorderTraversal(root);
    // cout << endl;
    levelOrderTraversal(root);
    cout << findDepth_usingDFS(root) << endl;
    int ans = 0;

    findDepth_usingcounter(root, 0, ans);
    cout << ans << endl;
}