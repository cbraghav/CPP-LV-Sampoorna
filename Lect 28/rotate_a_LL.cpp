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
// O(1)
Node *insertatBegin(Node *head, int val)
{
    // create a new node
    Node *newnode = new Node(val);
    // set next of newnode to head
    newnode->next = head;
    // set head to newnode
    head = newnode;
    return head;
}
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

int find_len(Node *head)
{
    Node *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}
// O(N)
Node *rotate_LL(Node *head, int k)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    int N = find_len(head);
    k = k % N;
    if (k == 0)
    {
        return head;
    }

    // connect last node to head -> to make LL circular
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next == NULL)
        { // curr is at last node
            curr->next = head;
            break;
        }
        curr = curr->next;
    }
    int cnt = N - k;
    curr = head;
    Node *prev;

    while (cnt--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;
    return curr; // curr becomes new head
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
    head = rotate_LL(head, 5);
    traverse(head);
}