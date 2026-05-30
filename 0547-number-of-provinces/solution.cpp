class Solution {
public:
    void dfs(int node,vector<vector<int>> isConnected,vector<int> &visited,int c){
        visited[node]=1;
        for(int j=0;j<c;j++){
            if(isConnected[node][j]==1 && visited[j]!=1){
                dfs(j,isConnected,visited,c);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int r = isConnected.size();
        int c = isConnected[0].size();
        int ans=0;
        vector<int> visited(r,0);
        for(int i=0;i<r;i++){
           if(visited[i]!=1){
                ans++;
                dfs(i,isConnected,visited,c);
           }
        }
        return ans;
    }
};
