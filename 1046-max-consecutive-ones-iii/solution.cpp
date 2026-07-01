class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxLen=0;
        int n = nums.size();
        
        //in one window there should be atmost k zero
        while(r<n){
            //shrink
            while(k==0 && nums[r]==0){
                if(nums[l]==0) {
                
                    k++;
                }
                l++;
                
            }
            //expand r
            if(nums[r]==1){
                maxLen=max(maxLen,r-l+1);
            }else if(nums[r]==0 && k>0){
                maxLen=max(maxLen,r-l+1);
                k--;
            }
            r++;
        }
        return maxLen;
    }
};
