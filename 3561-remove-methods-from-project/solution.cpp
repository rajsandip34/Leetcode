class Solution {
public:
    void dfs1(int k, vector<int> &infectedNodes,
              unordered_map<int, vector<int>> &mp) {

        infectedNodes[k] = 1;

        for (int x : mp[k]) {
            if (!infectedNodes[x]) {
                dfs1(x, infectedNodes, mp);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        unordered_map<int, vector<int>> mp;

        for (auto &it : invocations) {
            mp[it[0]].push_back(it[1]);
        }

        // Mark all suspicious methods
        vector<int> infectedNodes(n, 0);
        dfs1(k, infectedNodes, mp);

        // Check if any clean method invokes a suspicious method
        for (auto &it : invocations) {
            int u = it[0];
            int v = it[1];

            if (infectedNodes[u] == 0 && infectedNodes[v] == 1) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        // Remove suspicious methods
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (infectedNodes[i] == 0)
                ans.push_back(i);
        }

        return ans;
    }
};
