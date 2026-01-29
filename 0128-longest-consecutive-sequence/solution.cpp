class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int ans=1;
        int maxi=INT_MIN;
        int prev =nums[0];
        int n=nums.size(); 
        for(int i=1;i<n;i++){
            if(nums[i]==prev+1){
                ans++;
                prev = nums[i];
            }else if(nums[i]==prev){
                continue;
            }else {
                if(maxi<ans) maxi= ans;
                ans=1;
                prev=nums[i];
            }
        }
        if(maxi<ans) maxi=ans;
        return maxi;
    }
};
