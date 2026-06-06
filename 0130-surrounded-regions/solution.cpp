class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int r = board.size();
        int c = board[0].size();
        vector<vector<int>> vis(r,vector<int> (c,0));
        queue<pair<int,int>> q;
        for(int j=0;j<c;j++){
            // check 1st row
            if(board[0][j]=='O' && !vis[0][j]){
                 vis[0][j]=1;
                 q.push({0,j});
            }
            //check last row

            if(board[r-1][j]=='O' && !vis[r-1][j]) {
                q.push({r-1,j});
                vis[r-1][j]=1;
            }
            
        }
        for(int j=0;j<r;j++){
            //check first column
            if(board[j][0]=='O' && !vis[j][0]) {
                q.push({j,0});
                vis[j][0]=1;
            }
            //chekc last column
            if(board[j][c-1]=='O' && !vis[j][c-1]) {
                q.push({j,c-1});
                vis[j][c-1]=1;
            }
        }
        //now traveserse bfs and mark visited to all the cell blocks which have to exclude
        while(!q.empty()){
            pair<int,int> p = q.front();
            int i=p.first;
            int j = p.second;
            
            q.pop();
            
            //check left 
            if((j-1>=0) && board[i][j-1]=='O' && !vis[i][j-1]){
                vis[i][j-1]=1;
                q.push({i,j-1});
            }
            //check right
            if((j+1<=c-1) &&  board[i][j+1]=='O' && !vis[i][j+1]){
                vis[i][j+1]=1;
                q.push({i,j+1});
            }
            //check up 
            if((i-1>=0) &&  board[i-1][j]=='O' && !vis[i-1][j]){
                vis[i-1][j]=1;
                q.push({i-1,j});
            } 
            if((i+1<=r-1) &&  board[i+1][j]=='O' && !vis[i+1][j]){
                vis[i+1][j]=1;
                q.push({i+1,j});
            } 
        } 
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!vis[i][j] && board[i][j]=='O') board[i][j]='X';
            }
        }     

               
        
            
    }
};
