class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        int n = nums.size();
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(ans[ans.size()-1]==nums[i]){
                ans[ans.size()-1] +=nums[i];
                int j = ans.size()-1;
                while(j>=1 && ans[j-1]==ans[j]) {
                    ans[j-1]+=ans[j];
                    ans.pop_back();
                    j--;
                }
            }
            else ans.push_back(nums[i]);
        }
        return ans;
    }    
};
