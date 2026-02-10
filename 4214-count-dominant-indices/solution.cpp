class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        vector<double> rightavg(n,0);
        double s = nums[n-1];
        rightavg[n-1] = s;
        int j= 2;
        for(int i=n-2;i>=0;i--){
            rightavg[i]= (s+nums[i])/j;
            j++;
            s+=nums[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>rightavg[i+1]) ans++;
            
        }
        return ans;
    }
};
