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
    Node(int data)
    {
        this->data = data;
    }
};

class StackLL
{
private:
    int sz = 0;
    Node *head = NULL;

public:
    void push(int data)
    {
        // create a new node
        Node *newnode = new Node(data);
        // set next of newnode to head
        newnode->next = head;
        // set head to newnode
        head = newnode;
        sz++;
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "stack is empty " << endl;
            return INT_MIN;
        }

        Node *temp = head;
        head = head->next;
        int ele = temp->data;
        delete temp;
        sz--;
        return ele;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        if (sz == 0)
        {
            return true;
        }
        return false;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty";
            return INT_MIN;
        }
        return head->data;
    }
};

int main()
{
    StackLL mystack;

    mystack.push(5);
    mystack.push(4);
    mystack.push(3);
    // cout << "top element" << mystack.top() << endl;
    mystack.pop();
    // cout << "top element after pop" << mystack.top() << endl;
    // cout << "size " << mystack.size() << endl;
    // cout << "ismepty " << mystack.isEmpty() << endl;
    mystack.pop();
    mystack.pop();
    cout << " size " << mystack.isEmpty() << endl;

    mystack.pop();
    mystack.pop();
}