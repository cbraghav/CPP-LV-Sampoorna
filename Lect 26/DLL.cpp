

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
void backwardTraverse(Node *tail)
{

    Node *curr = tail;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
    return;
}
void forwardSearch(Node *head, int element)
{

    Node *curr = head;

    while (curr != NULL)
    {
        if (curr->data == element)
        {
            cout << "found" << endl;
            return;
        }
        curr = curr->next;
    }
    cout << "not found" << endl;
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

pair<Node *, Node *> insertAfterPos(Node *head, Node *tail, int data, int pos)
{

    Node *nn = new Node(data);

    if (head == NULL)
    {
        return {nn, nn};
    }
    int cnt = 1;

    Node *curr = head;

    while (curr != NULL)
    {
        if (cnt == pos)
        {
            break;
        }
        curr = curr->next;
        cnt++;
    }

    if (curr == NULL)
    {
        cout << "Invalid pos" << endl;
        ;
        delete nn;
        return {head, tail};
    }

    nn->next = curr->next;

    // a = curr->next
    // a->prev = nn
    if (curr->next != NULL)
    {
        // means a exist
        (curr->next)->prev = nn;
    }
    else
    {
        tail = nn;
    }
    curr->next = nn;
    nn->prev = curr;

    return {head, tail};
}
// TC O(1)
pair<Node *, Node *> deleteFromBegin(Node *head, Node *tail)
{

    // 0 element in list
    if (head == NULL)
    {
        return {NULL, NULL};
    }

    Node *temp = head;

    // 1 element in list -> head and  tail  same h
    if (head->next == NULL)
    {
        delete temp;
        return {NULL, NULL};
    }

    // 2 or more element
    Node *newhead = head->next;
    newhead->prev = NULL;
    delete temp;
    return {newhead, tail};
}
// TC O(1)
pair<Node *, Node *> deleteFromEnd(Node *head, Node *tail)
{
    // 0 element in list
    if (tail == NULL)
    {
        return {NULL, NULL};
    }

    // 1 element -> tail-> prev h vo null h

    if (tail->prev == NULL)
    {
        delete tail;
        return {NULL, NULL};
    }

    Node *temp = tail;
    Node *newtail = tail->prev;
    newtail->next = NULL;
    delete temp;
    return {head, newtail};
}
// O(N)
pair<Node *, Node *> deleteatPos(Node *head, Node *tail, int pos)
{

    int cnt = 1;
    Node *curr = head;

    while (curr != NULL)
    {
        if (cnt == pos)
        {
            break;
        }
        cnt++;
        curr = curr->next;
    }

    if (curr == NULL)
    {
        cout << "Invalid delete" << endl;
        return {head, tail};
    }

    Node *p = curr->prev;
    Node *n = curr->next;
    if (curr->prev == NULL)
    {
        // curr is first element or curr is head
        head = n; // head = head->next
    }
    else
    {
        p->next = n;
    }

    if (n == NULL)
    {
        // curr is last element
        tail = tail->prev; // tail = p;
    }
    else
    {
        n->prev = p;
    }

    return {head, tail};
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
    // // backwardTraverse(ptr.second);

    // ptr = insertAfterPos(ptr.first, ptr.second, 3, 2);
    // forwardTraverse(ptr.first);

    // ptr = insertAfterPos(ptr.first, ptr.second, 9, 7);
    // forwardTraverse(ptr.first);
    // ptr = insertAfterPos(ptr.first, ptr.second, 6, 5);
    // forwardTraverse(ptr.first);

    // backwardTraverse(ptr.second);

    // ptr = deleteFromBegin(ptr.first, ptr.second);
    // forwardTraverse(ptr.first);
    // ptr = deleteFromEnd(ptr.first, ptr.second);
    // forwardTraverse(ptr.first);

    ptr = deleteatPos(ptr.first, ptr.second, 1);
    forwardTraverse(ptr.first);
    ptr = deleteatPos(ptr.first, ptr.second, 4);
    forwardTraverse(ptr.first);
    ptr = deleteatPos(ptr.first, ptr.second, 2);
    forwardTraverse(ptr.first);
    ptr = deleteatPos(ptr.first, ptr.second, 5);
    forwardTraverse(ptr.first);
}