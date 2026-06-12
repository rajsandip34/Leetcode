class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<prerequisites.size();i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            m[u].push_back(v);
        }
        queue<int> q;
        vector<int> indegree(numCourses);
        for(int i=0;i<numCourses;i++){
            for(int x:m[i]) indegree[x]++;
        }
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for(int x:m[node]){
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
        }
        if(ans.size()==numCourses) return ans;
        return {};
            
    }
};
