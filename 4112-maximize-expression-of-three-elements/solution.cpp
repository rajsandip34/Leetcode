class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int max1 =INT_MIN;
        int max2 = INT_MIN;
        int min =INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(min>nums[i]) min = nums[i];
            if(max1<nums[i]){
                max2 = max1;
                max1=nums[i];
            }else if(max2<nums[i] ) max2 =nums[i];
        }
        return max1+max2-min;
    }
};
