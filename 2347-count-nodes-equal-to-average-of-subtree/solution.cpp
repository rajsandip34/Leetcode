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
    int ans=0;
    int nodes=0;
    int f(TreeNode* root,int &sum){
        if(root==NULL){
            sum=0;
            return 0;
        }
        int leftSum=0;
        int leftNode = f(root->left,leftSum);

        int rightSum=0;
        int rightNode = f(root->right,rightSum);
        sum=leftSum+rightSum+root->val;
        int nodes=leftNode+rightNode+1;
        if(root->val==sum/nodes) ans++;
        return nodes;
    }
    int averageOfSubtree(TreeNode* root) {
       int sum=0;
        f(root,sum);
        return ans;
    }
};
