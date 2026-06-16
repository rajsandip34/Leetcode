class Solution {
public:
    string processStr(string s) {
        string result="";
        for(char x:s){
            if(x>=97 && x<97+26) result+=x;
            if(x=='*' && !result.empty()) result.pop_back();
            if(x=='#'&& !result.empty()) result+=result;
            if(x=='%' && !result.empty()) reverse(result.begin(),result.end()); 
        }
        return result;
    }
};
