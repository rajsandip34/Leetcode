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
    TreeNode* first;
    void find(TreeNode* root,int start){
        TreeNode* t;
        if(root==NULL) return;
        if(root->val==start) {
            first = root;
            return;
        }
        find(root->left,start);
        find(root->right,start);
    }
    void markParent(unordered_map<TreeNode*,TreeNode*> &m,TreeNode* root){
        if(root==NULL) return;
        if(root->left!=NULL) m[root->left]=root;
        if(root->right!=NULL) m[root->right]=root;
        markParent(m,root->left);
        markParent(m,root->right);
        
    }

    int amountOfTime(TreeNode* root, int start) {
        find(root,start);
        unordered_map<TreeNode*,TreeNode*> m;
                        //value , parent;
        markParent(m,root);
        unordered_set<TreeNode*> s;
        s.insert(first);
        queue<pair<TreeNode*,int>> q;
        q.push({first,0});
    //bfs
        int maxLevel=0;
        while(!q.empty()){
            int size=q.size();
            
            
            pair<TreeNode*,int> p = q.front();
            TreeNode* t= p.first;
            int level = p.second;
            q.pop();
            maxLevel=max(level,maxLevel);
            if(t->left!=NULL){
                if(s.find(t->left)==s.end()){
                    q.push({t->left,level+1});
                    s.insert(t->left);
                }
                        
            }
            if(t->right!=NULL){
                if(s.find(t->right)==s.end()){
                    q.push({t->right,level+1});
                    s.insert(t->right);
                }
            }
            if(m.find(t)!=m.end()){
                TreeNode* parent = m[t];
                if(s.find(parent)==s.end()){
                    q.push({parent,level+1});
                    s.insert(parent);
                }
            }
        }
        
      return maxLevel;


    }
    

};
