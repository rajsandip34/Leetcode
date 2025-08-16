class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> v1;
        vector<int> v2;
        
        
        
        for(int i=0;i<s.length();i++){
            
            //for s
            for(int j=i;j<s.length();j++){
                if(s[i]==s[j]) v1.push_back(j);
            }
            //for t
            for(int j=i;j<t.length();j++){
                if(t[i]==t[j]) v2.push_back(j);
            }
            if(v1!=v2) return false;
            v1.clear();
            v2.clear();
        }
        return true;

    }
};
