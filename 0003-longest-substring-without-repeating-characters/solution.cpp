class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1 || s.length()==0) return s.length();
        set<char> st;
        int n= s.length();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            int subMax=0;
            for(int j=i;j<n;j++){
                //found
                if(st.find(s[j])!=st.end()){
                    mx = max(mx,subMax);
                    st.clear();
                    break;
                }else{ // not found;
                    st.insert(s[j]);
                    subMax++;

                }
            }
            mx = max(mx,subMax);
        }
        return mx;
    }
};
