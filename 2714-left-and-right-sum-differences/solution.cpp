class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        if(n == 1) return {0};
        vector<int> rightSum(n,0);
        rightSum[n-1]=0;
        int p =0;
        for(int i=n-2;i>=0;i--){
            rightSum[i]=p+nums[i+1];
            p=rightSum[i];
        }
        
        int prev=nums[0];
        nums[0]=0;
        for(int i=1;i<n-1;i++){
            int s = nums[i];
            nums[i]=prev;
            prev+=s;
        }
        nums[n-1]=prev;
       
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]-rightSum[i]);
        }
        return nums;
    }
};
