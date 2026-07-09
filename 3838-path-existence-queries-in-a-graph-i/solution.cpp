class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool> ans;
        vector<int> components(n);
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i]-nums[i-1])>maxDiff) j++ ;
            components[i]=j;
        }
        for(int i=0;i<queries.size();i++){
            int x = queries[i][0],y=queries[i][1];
            if(components[x]==components[y]) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
