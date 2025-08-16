class Solution {
public:
    string common(string a,string b){
        string str="";
        for(int i=0;i<a.length()&&b.length();i++){
            if(a[i]==b[i]) str+=a[i];
            else break;
        }
        return str;

    }
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        
       
        if (strs.size()==1) return strs[0];
        
        str = strs[0];
        
        for(int i=1;i<strs.size();i++){
            str = common(str,strs[i]);
            if(str=="") return "";
        }
        return str;
    }
};
