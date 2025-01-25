class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int data)
    {
        while (root != NULL)
        {
            if (root->val == data)
            {
                return root;
            }
            // 5  < 7(data)
            if (root->val < data)
            {
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }
        return nullptr;
    }
};