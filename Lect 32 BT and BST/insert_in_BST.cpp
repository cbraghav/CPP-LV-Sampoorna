/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int data)
    {
        if (root == NULL)
        {
            TreeNode *newroot = new TreeNode(data);
            return newroot;
        }
        TreeNode *curr = root;
        while (curr != NULL)
        {
            // 11 < 12
            if (curr->val <= data)
            {
                // move to right
                if (curr->right != NULL)
                {
                    // if right exist , then move to right
                    curr = curr->right;
                }
                else
                {
                    // create a node
                    TreeNode *newnode = new TreeNode(data);
                    curr->right = newnode;
                    break;
                }
            }
            else
            {
                // move to left
                if (curr->left != NULL)
                {
                    // left exist
                    curr = curr->left;
                }
                else
                {
                    // left not exist
                    TreeNode *newnode = new TreeNode(data);
                    curr->left = newnode;
                    break;
                }
            }
        }
        return root;
    }
};