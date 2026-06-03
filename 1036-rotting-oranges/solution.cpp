class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size();
        int column = grid[0].size();
        queue<pair<int,int>> q;
        int fresh_orange=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]==2) q.push({i,j});
                else if(grid[i][j]==1) fresh_orange++;
            }
        }
        int time=0;
        int count=0;
        while(!q.empty()){
                int size= q.size();
                bool flag=false;
                for(int k=0;k<size;k++){
                    pair<int,int> p = q.front();
                    q.pop();
                    int i=p.first;
                    int j=p.second;
                    //check left
                    if((j-1)>=0 && grid[i][j-1]==1){
                        grid[i][j-1]=2;
                        q.push({i,j-1});
                        count++;
                        flag=true;
                    }
                    //check down
                    if((i+1)<=row-1 && grid[i+1][j]==1){
                        grid[i+1][j]=2;
                        q.push({i+1,j});
                        count++;
                        flag=true;
                    }
                    //check right
                    if((j+1)<=column-1  && grid[i][j+1]==1){
                        grid[i][j+1]=2;
                        q.push({i,j+1});
                        count++;
                        flag=true;
                    }
                    //check up
                    if((i-1)>=0 && grid[i-1][j]==1){
                        grid[i-1][j]=2;
                        q.push({i-1,j});
                        count++;
                        flag=true;
                    }
                }
                if(flag) time++;
        }
        if(count==fresh_orange) return time;
        else return -1;
    }
};
