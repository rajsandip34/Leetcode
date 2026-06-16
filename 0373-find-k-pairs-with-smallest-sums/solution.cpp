class Node{
public:
    int val;
    int i;
    int j;
    Node(int val,int i,int j){
        this->val=val;
        this->i=i;
        this->j=j;
    }
};
//min heap
class cmp{
public:
    bool operator()(Node &a,Node &b){
        return a.val>b.val;
    }
};
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<Node,vector<Node>,cmp> pq;
        //we push the num1.size element
        for(int i=0;i<min(k,(int)nums1.size());i++){
            Node a(nums1[i]+nums2[0],i,0);
            pq.push(a);    
        }
        while(ans.size()!=k && !pq.empty()){
            Node b = pq.top();
            pq.pop();
            //insert it's next row element
            int x = b.i;
            int y =  b.j;
            if(y<nums2.size()-1) pq.push(Node(nums1[x]+nums2[y+1],x,y+1));
            ans.push_back({nums1[b.i],nums2[b.j]});
        }
        
        
        return ans;

    }
};
