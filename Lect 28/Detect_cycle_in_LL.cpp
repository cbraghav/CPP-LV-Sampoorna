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
// tC O(N*logN)
// SC O(N)
bool detect_cycle_bf(Node *head)
{
    map<Node *, int> freq;
    Node *curr = head;
    while (curr != NULL)
    {
        if (freq.find(curr) != freq.end())
        {
            // there is a cycle
            return true;
        }
        freq[curr] = 1;
        curr = curr->next;
    }
    return false;
}

bool detect_cycle_slow_and_fast(Node *head)
{

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL and fast != NULL and fast->next != NULL)
    {

        cout << slow->data << " ";
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    // Node *y = new Node(5);
    // cout << y->data << endl;
    // cout << y << endl;

    Node *head1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);

    head1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    // node6->next = node3;

    cout << detect_cycle_slow_and_fast(head1) << endl;
}