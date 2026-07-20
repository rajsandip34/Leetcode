class Solution {
public:
    class dataType{
    public:
      int sti ;
       int stj;
        int moves;
        dataType(int sti,int stj,int moves){
            this->sti=sti;
            this->stj=stj;
            this->moves=moves;
        }
    };
    bool canReach(vector<int>& start, vector<int>& target) {
        queue<dataType> q;
        dataType a = dataType(start[0],start[1],0);
        vector<vector<int>> vis(8,vector<int> (8,0));
        q.push(a);
        //we have 8x8 chess board
        while(!q.empty()){
            dataType b =q.front();
            q.pop();
            int i = b.sti;
            int j=b.stj;
            int move = b.moves;
            vis[i][j]=1;
            if(i==target[0] && j==target[1] &&move%2==0) return true;
            //now push all valid position knight can go
            //knight can go (i-2,j-1)(i-1,j-2)(i+1,j-2)(i+2,j-1)
                            //(i+2,j+1),(i+1,j+2)(i-1,j+2),(i-2,j+1)
            if(i-2>=0 && j-1>=0 && !vis[i-2][j-1]){
                vis[i-2][j-1]=1;
                q.push(dataType(i-2,j-1,move+1));
            }
            if(i-1>=0 && j-2>=0 && !vis[i-1][j-2]){
                vis[i-1][j-2]=1;
                q.push(dataType(i-1,j-2,move+1));
            }
            if(i+1<=7 && j-2>=0 && !vis[i+1][j-2]){
                vis[i+1][j-2]=1;
                q.push(dataType(i+1,j-2,move+1));
            }
            if(i+2<=7 && j-1>=0 && !vis[i+2][j-1]){
                vis[i+2][j-1]=1;
                q.push(dataType(i+2,j-1,move+1));
            }
            if(i+2<=7 && j+1<=7 && !vis[i+2][j+1]){
                q.push(dataType(i+2,j+1,move+1));
                vis[i+2][j+1]=1;
            }
            if(i+1<=7 && j+2<=7 && !vis[i+1][j+2]){
                vis[i+1][j+2]=1;
                q.push(dataType(i+1,j+2,move+1));
            }
            if(i-1>=0 && j+2<=7 && !vis[i-1][j+2]){
                vis[i-1][j+2]=1;
                q.push(dataType(i-1,j+2,move+1));
            }
            if(i-2>=0 && j+1<=7 && !vis[i-2][j+1]){
                vis[i-2][j+1]=1;
                q.push(dataType(i-2,j+1,move+1));
            }
        }
        return false;
            
                
    }
};
