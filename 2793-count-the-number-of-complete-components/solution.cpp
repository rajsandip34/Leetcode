class Solution {
public:
    int bfs(int node,vector<int> &vis,unordered_map<int,vector<int>> &mp){
        //
        queue<int> q;
        int n=0;
        int m=0;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int s = q.front();
            n++;
            q.pop();
            for(int x:mp[s]){
                m++;
                if(!vis[x]){
                    vis[x]=1;
                    q.push(x);
                }
            }
            
        }
        m/=2;
        if(m==n*(n-1)/2) return 1;
        return 0;

    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> mp;
        int ans=0;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0],v=edges[i][1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        for(int i=0;i<n;i++){
            //notfound
            if(mp.find(i)==mp.end()) mp[i]={}; 
        }
        vector<int> vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans += bfs(i,vis,mp);
            }
            
        }
        return ans;
    }
};
