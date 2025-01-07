#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data, Node *next1)
    {
        this->data = data;
        next = next1;
    }
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void traverse(Node *head)
{

    Node *i = head;

    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next; // i++ -> i= i+1
    }
    cout << endl;
}

// TC O(N)
Node *insertAtEnd(Node *head, int val)
{
    // create a new node
    Node *newnode = new Node(val);

    // if head == null , that means -> list is empty -> return new node as head
    if (head == NULL)
    {
        return newnode;
    }
    else
    {
        Node *curr = head;
        // traverse till next of i is not NULL
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        // curr->next vo abhi null hai ,
        // but should point to new element
        curr->next = newnode;
        return head; // head is not changed
    }
}
// TC O(N)  SC O(N)
Node *reverseSLL_usingStack(Node *head)
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

// TC O(N) SC O(1)
Node *reverseSLL_iterative(Node *head)
{
    Node *curr = head;
    Node *back = NULL;

    while (curr != NULL)
    {
        Node *front = curr->next;
        curr->next = back;
        back = curr;
        curr = front;
    }
    return back;
}

Node *reverseSLL_usingRecursion(Node *curr)
{

    // base case -> 0 or 1 element
    if (curr == NULL or curr->next == NULL)
    {
        return curr;
    }

    Node *newhead = reverseSLL_usingRecursion(curr->next);
    curr->next->next = curr; 
    // Node *front = curr->next;
    // front->next = curr;

    curr->next = NULL;
    return newhead;
}
int main()
{

    Node *head = insertAtEnd(NULL, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);

    head = insertAtEnd(head, 6);
    traverse(head);

    head = reverseSLL_usingRecursion(head);
    traverse(head);
}