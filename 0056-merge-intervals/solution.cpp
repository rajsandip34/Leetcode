class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n =intervals.size();
        if(n==0 || n==1) return intervals;
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int k=0;
        for(int i=1;i<n;i++){
            int l = ans[k][0];
            int r = ans[k][1];
            int left = intervals[i][0];
            int right = intervals[i][1];
            if(r>=left){
                ans[k][1] = max(r,right);
            }else{
                ans.push_back(intervals[i]);
                k++;
            }
        }
        return ans;
    }
};
