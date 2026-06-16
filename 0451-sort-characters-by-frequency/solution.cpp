class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char x:s){
            mp[x]++;
        }
        int n = s.length();
        //maximum an element have n freq
        vector<vector<char>> v(n+1);
        for(auto p:mp){
            char c = p.first;
            int freq = p.second;
            v[freq].push_back(c);
        }
        string ans="";
        for(int j=v.size()-1;j>=1;j--){
            for(char x:v[j]){
                string z(j,x);
                ans+=z;
                // int t=j;
                // while(t>=1){
                //     ans+=x;
                //     t--;
                // }
            }
        }
        return ans;
    }
};
