class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        int i=1;
        sort(nums.begin(),nums.end());
    
        for(int i=0;i<k && !nums.empty();i++){
            int temp=nums[nums.size()-1];
            ans.push_back(nums[nums.size()-1]);
            nums.pop_back();
            while( !nums.empty() &&temp==nums[nums.size()-1] ){
                nums.pop_back();
            }
            
        }
        return ans;
    }
};
