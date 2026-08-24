class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i=0;
        while(i<nums.size() && lower<=upper){
            if(lower<nums[i]){
                ans.push_back({lower,min(nums[i]-1,upper)});
                lower = nums[i]+1;
                
            }else if(lower==nums[i]){
                lower++;
                
            }
            
            i++;
        }
        if(lower<=upper) ans.push_back({lower,upper});
        return ans;
    }
};
