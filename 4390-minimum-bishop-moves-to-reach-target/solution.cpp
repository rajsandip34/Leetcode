class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        queue<pair<int,pair<int,int>>> q;
        q.push({source[0]-1,{source[1]-1,0}});
        vector<vector<int>> vis(8,vector<int> (8,0));
        vis[source[0]-1][source[1]-1]=1;
        while(!q.empty()){
            //bishop can go diagnolly in 4 directions
            pair<int,pair<int,int>> p = q.front();
            q.pop();
            int i=p.first;
            int j= p.second.first;
            int moves=p.second.second;
            if(i==target[0]-1 && j== target[1]-1) return p.second.second;
            //diagoaly up n right
            int x=i,y=j;
            while(x>=0 && y<8){
                if(!vis[x][y]){
                    q.push({x,{y,moves+1}});
                    vis[x][y]=1;
                }
                x--;
                y++;
            }
            x=i,y=j;
            //diagonally down n right
            while(x<8 && y<8){
                if(!vis[x][y]) {
                    q.push({x,{y,moves+1}});
                    vis[x][y]=1;
                }
                x++;
                y++;
            }
            x=i,y=j;
            //diagonally left up
            while(x>=0 && y>=0){
                if(!vis[x][y]){
                    q.push({x,{y,moves+1}});
                    vis[x][y]=1;
                }
                x--;
                y--;
            }
            x=i,y=j;
            //diagonally left down
            while(x<8 && y>=0){
                if(!vis[x][y]){
                    q.push({x,{y,moves+1}});
                    vis[x][y]=1;
                }
                x++;
                y--;
            }
        }
        return -1;
    }
};
