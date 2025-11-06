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
    void order(TreeNode* root,TreeNode* &prev,bool &flag){
        
        if(root==NULL) return;
        order(root->left,prev, flag);
        if(prev==NULL) prev=root;
        else{
            if(prev->val >= root->val) {
                flag = false;
                return;
            }
        }
        prev=root;
        order(root->right,prev,flag);
        
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev=NULL;
        bool flag= true;
        order(root,prev,flag);
        return flag;
        
    }
};
