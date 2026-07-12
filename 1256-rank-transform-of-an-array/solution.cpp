class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans(arr.size());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //min heap
        for(int i=0;i<arr.size();i++){
            pq.push({arr[i],i});
        }
        int j=1;
        int pre=INT_MAX;
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();
            int x = p.first;
            int idx=p.second;
            if(pre<x) j++;
            ans[idx]=j;
            pre=x;

        }
        return ans;
    }
};
