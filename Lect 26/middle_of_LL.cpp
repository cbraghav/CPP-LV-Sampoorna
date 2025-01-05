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
// TC O(N)
Node *insertAfterData(Node *head, int val, int valmatch)
{
    // 1. Create a new node

    Node *newNode = new Node(val);

    // list is empty
    if (head == NULL)
    {
        return newNode;
    }

    // valmatch not found
    // valmatch found

    Node *curr = head;
    // traverse the linked list
    while (curr != NULL)
    {
        if (curr->data == valmatch)
        {
            break;
        }
        curr = curr->next;
    }

    // if valmatch not found means curr == NULL
    if (curr == NULL)
    {
        cout << "valmatch not found" << endl;
        return head;
    }
    else
    {
        newNode->next = curr->next;
        curr->next = newNode;
        return head;
    }
}

// TC O(1)
Node *deleteFromBeginning(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    head = head->next;

    delete temp;
    return head;
}
// O(N)
Node *deleteFromEnd(Node *head)
{
    // 0 element in list
    if (head == NULL)
    {
        return NULL;
    }
    // 1 element in list
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    // list has 2 or more elements;

    Node *curr = head;
    Node *prev;

    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    // prev -> second last ko
    // curr -> last ko

    prev->next = NULL;
    delete curr;
    return head;
}

Node *deleteSpecificElement(Node *head, int val)
{
    // 0 element in list
    if (head == NULL)
    {
        return NULL;
    }
    // only 1 element list
    if (head->next == NULL)
    {
        if (head->data == val)
        {
            delete head;
            return NULL;
        }
        else
        {
            return head;
        }
    }
    Node *curr = head;
    Node *prev;

    while (curr != NULL)
    {
        if (curr->data == val)
        {
            // found val
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL)
    {
        return head;
    }

    prev->next = curr->next;
    delete curr;

    return head;
}

void search(Node *head, int val)
{

    Node *i = head;

    while (i != NULL)
    {
        if (val == i->data)
        {
            cout << "found" << endl;
            return;
        }
        i = i->next;
    }
    cout << endl;
}

// Tc -> O(N + N/2)
void MiddleOfLL_BF(Node *head)
{
    int len = 0;
    Node *curr = head;

    while (curr != NULL)
    {
        len++;
        curr = curr->next;
    }

    cout << "length of LL is " << len << endl;

    int mid = (len / 2) + 1;

    int cnt = 0;
    curr = head;

    while (curr != NULL)
    {
        cnt++;
        if (cnt == mid)
        {
            cout << "middle element is " << curr->data << endl;
        }
        curr = curr->next;
    }
}

// O(N/2)
void MiddleOfLL_TAH(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        if (fast->next != NULL)
            fast = fast->next->next;
    }
    cout << " middle is" << slow->data;
    return;
}
int main()
{

    Node *head = insertatBegin(NULL, 11);
    head = insertAtEnd(head, 12);
    head = insertAtEnd(head, 13);
    // head = insertAtEnd(head, 14);

    traverse(head);

    MiddleOfLL_BF(head);
    MiddleOfLL_TAH(head);
}