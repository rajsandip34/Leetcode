class Solution {
public:
    void bfs(int i,int j, vector<vector<int>> &vis,vector<vector<char>>& grid){
        int r = grid.size();
        int c =grid[0].size();
        queue<pair<int,int>> q;
        vis[i][j]=1;
        q.push({i,j});
        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            //check left, up,down and right
            if((j-1>=0) && grid[i][j-1]=='1' && !vis[i][j-1]){
                vis[i][j-1]=1;
                q.push({i,j-1});
            }
            if((j+1<=c-1) && grid[i][j+1]=='1' && !vis[i][j+1] ){
                vis[i][j+1]=1;
                q.push({i,j+1});
            }
            if( (i-1>=0) && grid[i-1][j]=='1' && !vis[i-1][j]){
                vis[i-1][j]=1;
                q.push({i-1,j});
            }
            if((i+1<=r-1) && grid[i+1][j]=='1' && !vis[i+1][j] ){
                vis[i+1][j]=1;
                q.push({i+1,j});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int island=0;
        int r = grid.size();
        int c = grid[0].size();
        //creating visited 2d array to mark 
        vector<vector<int>> vis(r,vector<int> (c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    island++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return island;
    }
};
