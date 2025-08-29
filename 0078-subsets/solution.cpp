class Solution {
public:
    void helper(vector<int> ans,vector<vector<int>> &finalAns,vector<int>& nums,int idx){
        if(idx==nums.size()){
            finalAns.push_back(ans);
            return ;
        }
        helper(ans,finalAns,nums,idx+1);
        ans.push_back(nums[idx]);
        helper(ans,finalAns,nums,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(ans,finalAns,nums,0);
        return finalAns;
        

        
    }
};
