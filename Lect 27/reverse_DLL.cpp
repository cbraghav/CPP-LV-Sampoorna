

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        data = 0;
        prev = NULL;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
    Node(int data, Node *prev, Node *next)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

void forwardTraverse(Node *head)
{

    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
    return;
}

// TC O(1)
pair<Node *, Node *> insertAtBegin(Node *head, Node *tail, int data)
{
    // 1. create a new node
    Node *nn = new Node(data);
    if (head == NULL)
    {
        return {nn, nn};
    }
    // 2.
    nn->next = head;
    // 3.
    head->prev = nn;
    head = nn;
    return {head, tail};
}
// TC O(1)
pair<Node *, Node *> insertAtEnd(Node *head, Node *tail, int data)
{
    Node *nn = new Node(data);
    if (tail == NULL)
    {
        return {nn, nn};
    }
    nn->prev = tail;
    tail->next = nn;
    tail = nn;
    return {head, tail};
}
// TC O(N)  SC O(N)
Node *reverseDLL_usingStack(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    stack<int> st;
    Node *curr = head;
    while (curr != NULL)
    {
        st.push(curr->data);
        curr = curr->next;
    }
    curr = head;
    while (curr != NULL)
    {
        curr->data = st.top();
        st.pop();
        curr = curr->next;
    }
    return head;
}

Node *reverse_DLL(Node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    Node *back = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        back = curr->prev;
        curr->prev = curr->next; // curr->prev = front
        curr->next = back;

        curr = curr->prev; // curr = front
    }

    return back->prev;
}

int main()
{

    pair<Node *, Node *> ptr;
    ptr = insertAtBegin(NULL, NULL, 1);
    ptr = insertAtEnd(ptr.first, ptr.second, 2);
    ptr = insertAtEnd(ptr.first, ptr.second, 3);
    ptr = insertAtEnd(ptr.first, ptr.second, 4);
    ptr = insertAtEnd(ptr.first, ptr.second, 5);
    forwardTraverse(ptr.first);
    ptr.first = reverse_DLL(ptr.first);
    forwardTraverse(ptr.first);
}