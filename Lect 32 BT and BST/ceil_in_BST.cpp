int findCeil(Node *root, int input)
{
    if (root == NULL)
        return -1;
    int ceil = -1;

    while (root != NULL)
    {

        if (root->data == input)
        {
            return input;
        }

        if (root->data > input)
        {
            ceil = root->data;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return ceil;
    // Your code here
}