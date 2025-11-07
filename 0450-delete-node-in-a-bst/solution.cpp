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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL ) return root;
        if(root->val==key){
            //case 1 leaf node
            if(root->left==NULL && root->right==NULL){
                root=NULL;
                return root;
            }
            //case 2 one child exist
            else if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL) root=root->left;
                else root=root->right;
                return root;
            } 
            //case 3 both nodes exits
            // we have to find its inorder predecessor or succesor
            else {
                TreeNode* temp=root;
                temp=temp->left;
                while(temp->right!=NULL){
                    temp=temp->right;
                }
                root->val=temp->val;
                root->left=deleteNode(root->left,temp->val);
                return root;
            }

        }
        if(root->val>key) root->left=deleteNode(root->left,key);
        else if(root->val<key) root->right=deleteNode(root->right,key);
        return root;
    }
};
