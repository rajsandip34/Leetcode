class Solution {
public:
    vector<string> ans;
    
    void f(int n,string s,int open,int close){
        if(open<0) return ;
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n) f(n,s+"(",open+1,close);
        if(close<open)f(n,s+")",open,close+1);
            
    }
    vector<string> generateParenthesis(int n) {
        f(n,"",0,0);
        return ans;

    }
};
