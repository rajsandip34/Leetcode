class node{
public:
    int val;
    int i;
    int j;
    node(int val,int i,int j){
        this->val=val;
        this->i=i;
        this->j=j;
    }
};
//comparator for min heap
class cmp{
public:
    bool operator()(const node &a,const node &b){
        return a.val>b.val;
    }
};
class Solution {
public:

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<node,vector<node>,cmp> pq;
        for(int i=0;i<matrix.size();i++){
            node a(matrix[i][0],i,0);
            pq.push(a);
        }
        int x=1;
        while(x<k){
            auto p = pq.top();
            int val = p.val;
            int i = p.i;
            int j = p.j;
            if(j<matrix[0].size()-1){
                node b(matrix[i][j+1],i,j+1);
                pq.push(b);
            }
            pq.pop();
            x++;
        }
        return pq.top().val;
    }
};
