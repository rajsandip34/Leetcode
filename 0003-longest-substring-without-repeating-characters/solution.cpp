class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int l=0,r=0,maxLen=0;
        int n=s.length();
        while(r<n){
            
            //shrinking l if found
            while(m.find(s[r])!=m.end()){
                m.erase(s[l]);
                l++;
            }
            //if not found expand r and update maxLen
            if(m.find(s[r])==m.end()){
                m[s[r]]=1;
                maxLen = max(maxLen,r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};
