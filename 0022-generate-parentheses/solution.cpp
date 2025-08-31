class Solution {
public:
    void parenth(vector<string> &ans,int n,string str,int open,int close){
        if(str.length()==2*n){
            ans.push_back(str);
        }

            
        if(open<n){
            parenth(ans,n,str+'(',open+1,close);
        }
        if(close<open){
            parenth(ans,n,str+')',open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
        vector<int> v;
        parenth(ans,n,"",0,0);
        return ans;
    }
};
