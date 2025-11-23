class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(char s : word1) m1[s]++;
        for(char s: word2) m2[s]++;
        for(auto p:m1){
            char ch = p.first;
            if(m2.find(ch)==m2.end()) return false;
        }
        unordered_map<int,int> m3;
        unordered_map<int,int> m4;

        for(auto p:m1){
            m3[p.second]++;
        }
        for(auto p:m2){
            m4[p.second]++;
        }
        if(m3==m4) return true;
        return false;
    }
};
