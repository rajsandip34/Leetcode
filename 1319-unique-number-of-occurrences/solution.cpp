class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(auto x:arr){
            m[x]++;
        }
        for(auto x:m){
            int freq = x.second;
            if(s.find(freq)!=s.end()){ //if exist;
                return false;
            }else{
                s.insert(freq);
            }
        }
        return true;
    }
};
