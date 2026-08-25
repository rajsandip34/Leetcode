class Solution {
public:
    vector<vector<int>> dp;
    int f(int i,int j,vector<vector<int>>& grid){
        if(i==grid.size()-1 && j==grid[0].size()-1) return grid[i][j];
        if(i>= grid.size() || j>=grid[0].size()) return 10000000009;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=grid[i][j]+f(i,j+1,grid);
        int down = grid[i][j]+f(i+1,j,grid);
        return dp[i][j]=min(right,down);

    }
    int minPathSum(vector<vector<int>>& grid) {
        dp.assign(205,vector<int> (205,-1));
        return f(0,0,grid);
    }
};
