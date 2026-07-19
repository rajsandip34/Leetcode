class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> vis(26);
        //we have to store last occurence of element also
        vector<int> lastOccur(26);
        for(int i=0;i<s.length();i++) lastOccur[s[i]-97]=i;
        //a->97 ascii value
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(vis[ch-97]) continue;
            if(st.empty()){
                st.push(s[i]);
                vis[ch-97]=1;
                continue;
            }
            while(!st.empty() && st.top()>ch){
                int t = st.top();
                if(lastOccur[t-97]>i) {
                    vis[t-97]=0;
                    st.pop();
                }
                else break;
            }
            st.push(ch);
            vis[ch-97]=1;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
