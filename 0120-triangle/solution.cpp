class Solution {
public:
    vector<vector<int>> dp;
    int f(int i,int j,vector<vector<int>>& triangle){
        if(i==triangle.size()-1) return triangle[i][j];
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        return dp[i][j]=min(triangle[i][j]+f(i+1,j,triangle),triangle[i][j]+f(i+1,j+1,triangle));
    }
 
    int minimumTotal(vector<vector<int>>& triangle) {
        dp.assign(205,vector<int> (205,INT_MAX));
        return f(0,0,triangle);
        
    }
};
