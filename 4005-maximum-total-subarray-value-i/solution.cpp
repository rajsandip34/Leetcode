class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        long long mx = INT_MIN;
        long long mn=INT_MAX;
        for(int i=0;i<n;i++)    {
            if(mx<nums[i]) mx=nums[i];
            if(mn>nums[i]) mn=nums[i];
        }
        long long ans =(long long) (mx-mn)*k;
        return ans;
    }
};
