class Solution {
public:
    int f(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>& dp,int r,int c){
        if(i>r-1 || j>c-1) return 0;
        
        if(obstacleGrid[i][j]==1) return 0;
        if(i==r-1 && j==c-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int right = f(i,j+1,obstacleGrid,dp,r,c);
        int down = f(i+1,j,obstacleGrid,dp,r,c);
        return dp[i][j]=right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r= obstacleGrid.size();
        int c = obstacleGrid[0].size();
        vector<vector<int>> dp(r,vector<int>(c,-1));
        return f(0,0,obstacleGrid,dp,r,c);
    }

};
