class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]=0;
        }
        int l=0,r=0;
        int ans=INT_MIN;
        while(r<s.size()){
            m[s[r]]++;
            //shrink 
            while(m[s[r]]>2){
                m[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
            
            r++;
        }
        return ans;
    }
};
