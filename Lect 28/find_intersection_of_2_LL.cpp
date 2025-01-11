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
// TC O(N*M)
Node *insertsectionof2LL_bf(Node *head1, Node *head2)
{

    Node *curr2 = head2;
    while (curr2 != NULL)
    {
        Node *curr1 = head1;
        while (curr1 != NULL)
        {
            if (curr1 == curr2)
            {
                return curr1;
            }
            curr1 = curr1->next;
        }
        curr2 = curr2->next;
    }
    return NULL;
}

// TC O( (N + M)*logN )
// SC O(N)
Node *insersection_using_hashing(Node *head1, Node *head2)
{
    map<Node *, int> mp1;
    Node *curr1 = head1;
    while (curr1 != NULL)
    {
        mp1[curr1] = 1;
        curr1 = curr1->next;
    }

    Node *curr2 = head2;
    while (curr2 != NULL)
    {
        //
        if (mp1.find(curr2) != mp1.end())
        {
            return curr2;
        }
        curr2 = curr2->next;
    }

    return NULL;
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
// TC O(N+M)
// SC O(1)
Node *insersection_using_length(Node *head1, Node *head2)
{

    int l1 = find_len(head1);
    int l2 = find_len(head2);
    Node *curr1 = head1;
    Node *curr2 = head2;
    while (l1 != l2 and l1 != 0 and l2 != 0)
    {
        if (l1 > l2)
        {
            curr1 = curr1->next;
            l1--;
        }
        else if (l2 > l1)
        {
            curr2 = curr2->next;
            l2--;
        }
    }

    while (curr1 != NULL and curr2 != NULL)
    {
        if (curr1 == curr2)
        {
            return curr1;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    return NULL;
}
int main()
{

    // Node *y = new Node(5);
    // cout << y->data << endl;
    // cout << y << endl;

    Node *head1 = insertAtEnd(NULL, 1);
    Node *head2 = insertAtEnd(NULL, 7);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);

    node4->next = node5;
    node3->next = node4;
    node2->next = node3;
    head1->next = node2;

    head2->next = node6;
    node6->next = node4;

    traverse(head1);
    traverse(head2);

    Node *common = insersection_using_length(head1, head2);
    if (common == NULL)
    {
        cout << "no intersection\n";
        return 0;
    }
    cout << common->data;
}