/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *findRightMostPart(TreeNode *root)
    {
        if (root->right == NULL)
        {
            return root;
        }
        return findRightMostPart(root->right);
    }
    TreeNode *mydeletenode(TreeNode *root)
    {
        // both null
        if (root->left == NULL and root->right == NULL)
        {
            return NULL;
        }
        // left is null
        if (root->left == NULL)
        {
            // left is null , but node in right
            return root->right;
        }
        // right is null
        if (root->right == NULL)
        {
            return root->left;
        }
        // both are not null

        TreeNode *rightSubTree = root->right;
        TreeNode *lastRightinLeftSubTree = findRightMostPart(root->left);
        lastRightinLeftSubTree->right =
            rightSubTree; // attach right subtree in right most part of left sub
                          // tree

        return root->left;
    }

    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root->val == key)
        {
            return mydeletenode(root);
        }
        TreeNode *curr = root;

        while (curr != NULL)
        {
            if (curr->val > key)
            {
                // towards left
                if (curr->left != NULL and curr->left->val == key)
                {
                    // delete curr->left
                    // yahi delete krna h
                    curr->left = mydeletenode(curr->left);
                    break;
                }
                else
                {
                    //
                    curr = curr->left;
                }
            }
            else
            {
                // towards right
                if (curr->right != NULL and curr->right->val == key)
                {
                    curr->right = mydeletenode(curr->right);
                    break;
                }
                else
                {
                    curr = curr->right;
                }
            }
        }
        return root;
    }
};