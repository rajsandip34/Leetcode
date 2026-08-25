class Solution {
public:
    vector<int> dp;
    int f(int i,vector<int> &nums){
        
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take = nums[i]+f(i+2,nums);
        
        
        int dTake = f(i+1, nums);
        return dp[i]=max(take,dTake);
    }
    int rob(vector<int>& nums) {
        dp.resize(105,-1);
        return f(0,nums);
    }
};
