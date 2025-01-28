class Solution
{

public:
    int floor(Node *root, int x)
    {
        // Code here
        Node *curr = root;
        int floor = -1;

        while (curr != NULL)
        {
            if (curr->data == x)
            {
                return x;
            }
            if (curr->data < x)
            {
                floor = curr->data;
                curr = curr->right;
            }
            else
            {
                curr = curr->left;
            }
        }
        return floor;
    }
};