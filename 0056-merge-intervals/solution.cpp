class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n= intervals.size();
        if(n==1 || n==0) return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        int j=0;
        for(int i=1;i<n;i++){
            int left = ans[j][0];
            int right= ans[j][1];
            int l = intervals[i][0];
            int r = intervals[i][1];
            if((l>=left && l<=right) && (r>=left && r<=right)){
                continue;
            }
            else if(l>=left && l<=right) {
                ans[j][0]=left;
                ans[j][1] = intervals[i][1];
            }else{
                ans.push_back(intervals[i]);
                j++;
            }
            

        }
        return ans;
    }
};
