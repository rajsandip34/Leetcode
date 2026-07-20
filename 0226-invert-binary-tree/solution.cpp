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
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //at each level go and swap the left and right subtree
        if(root==NULL) return root;
        TreeNode* s=root->left;
        root->left=root->right;
        root->right=s;
        
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
