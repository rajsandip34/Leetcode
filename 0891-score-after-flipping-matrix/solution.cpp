class Solution {
public:
    int binary(vector<vector<int>>& grid){
        int m=grid.size();
        int n= grid[0].size();
        
        int sum=0;
        for(int i=0;i<m;i++){
            int x=1;
            for(int j=n-1;j>=0;j--){
                sum+=x*grid[i][j];
                x=x*2;
            }
        }
        return sum;
    }
    int matrixScore(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n= grid[0].size();

        //checking rows;
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }

            }
        }
        //checking columns;
        
        for(int i=0;i<n;i++){
            int zero=0;
            int ones=0;
            for(int j=0;j<m;j++){
                if(grid[j][i]==0) zero++;
                else ones++;
            }
            if(zero>ones){
                for(int k=0;k<m;k++){
                    if(grid[k][i]==0) grid[k][i]=1;
                    else grid[k][i]=0;
                }
            }
        }
        
        return binary(grid);
    }
};
