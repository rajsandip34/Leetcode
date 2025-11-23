class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;
        int n = strs.size();
        for(int i=0;i<n;i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(strs[i]);
        }
        for(auto p:m){
            ans.push_back(move(p.second));
            
        }
        return ans;
    }
};
