class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(mn>nums[i]) mn =nums[i];
            if(mx<nums[i]) mx = nums[i];
        }
        //we have min is mn and max is mx
        vector<int> vis(mx-mn+1);
        for(int i=0;i<nums.size();i++){
            vis[nums[i]-mn]=1;
        }
        for(int i=0;i<vis.size();i++){
            if(vis[i]==0) ans.push_back(mn+i);
        }
        return ans;
             

        
    }
};
