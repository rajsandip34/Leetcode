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
    int maxi=INT_MIN;
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int s = level(root->left)+level(root->right);
        maxi = max(maxi,s);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        

        return maxi;
    }
};
