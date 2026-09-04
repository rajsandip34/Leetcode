class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> v(nums.size());
        int min=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<min) min = nums[i];
            v[i]=min;
        }
        int max=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(max < nums[i]) max=nums[i];
            if(max-v[i]<=k) return i;

        }
        return -1;
    }
};
