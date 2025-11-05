/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* t;
        if(min(p->val,q->val)<=root->val && max(q->val,p->val)>=root->val) return root;
        else if(max(q->val,p->val)<root->val) t=lowestCommonAncestor(root->left,p,q);
        else if(min(p->val,q->val)>root->val) t = lowestCommonAncestor(root->right,p,q);
        return t;
    }
};
