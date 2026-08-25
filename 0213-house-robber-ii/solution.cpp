class Solution {
public:
    vector<int> dp;
    int f(int i,int n,vector<int> &nums){
        if(i>n) return 0;
        
        if(dp[i]!=-1) return dp[i];
        int take= nums[i]+f(i+2,n,nums);
        int dTake=f(i+1,n,nums);
        return dp[i]=max(take,dTake); 
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        dp.resize(n+5,-1);
        int l=f(0,n-2,nums);
        dp.clear();
        dp.resize(n+5,-1);
        int r = f(1,n-1,nums);
        return max(l,r);
    }
};
