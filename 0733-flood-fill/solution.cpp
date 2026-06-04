class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r=image.size();
        int c=image[0].size();
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            int col=image[i][j];
            if(col==color) continue;
            image[i][j]=color;
            //check left;
            if((j-1>=0) &&image[i][j-1]==col) {
                q.push({i,j-1});
                
            }
            //check right
            if((j+1<=c-1) && image[i][j+1]==col){
                q.push({i,j+1});
                
            }
            // check down
            if((i+1<=r-1) && image[i+1][j]==col){
                q.push({i+1,j});
                
            }
            //check up
            if((i-1>=0) && image[i-1][j]==col){
                q.push({i-1,j});
                
            }
        }
        return image;
    }
};
