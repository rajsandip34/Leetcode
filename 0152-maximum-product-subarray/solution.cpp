class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prevmax =nums[0];
        int prevmin=nums[0];
        int ans=nums[0];
        int currmax=INT_MIN;
        int currmin = INT_MAX;
        for(int i=1;i<nums.size();i++){
            int x = nums[i];
            currmax = max({x,prevmax*x,prevmin*x});
            currmin = min({x,prevmax*x,prevmin*x});
            prevmax = currmax;
            prevmin = currmin;
            ans = max(ans,prevmax);
        }
        return ans;

    }
};
