class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> ans;
        priority_queue<pair<int,int>> pq; 
        for(auto p:m){
            int val = p.first;
            int freq = p.second;
            pq.push({p.second,p.first});
        }
        for(int j=0;j<k;j++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;

    }
};
