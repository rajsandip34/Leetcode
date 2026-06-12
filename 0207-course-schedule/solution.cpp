class Solution {
public:
    bool isCycle=false;
    void dfs(int node,vector<int> &vis, vector<int> &pathVis, unordered_map<int,vector<int>> &m){
        if(isCycle) return;
        vis[node]=1;
        pathVis[node]=1;
        for(int x:m[node]){
            if(!vis[x]){
                dfs(x,vis,pathVis,m);
            }else if(pathVis[x]){
                isCycle =true;
                return;
            }
        }
        pathVis[node]=0;
                

    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //create an unordered map tos tore directed graph
        unordered_map<int,vector<int>> m;
        for(int i=0;i<prerequisites.size();i++){
            m[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int> vis(numCourses);
        vector<int> pathVis(numCourses);
        for(auto p:m){
            int node = p.first;
            if(!vis[node]){
                dfs(node,vis,pathVis,m);
            }
        }
        return !isCycle;

    }
};
