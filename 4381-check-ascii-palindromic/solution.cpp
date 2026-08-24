class Solution {
public:
    string binary(int val){
        string ans="";
        while(val!=0){
            ans+=to_string(val%2);
            val/=2;
        }
        reverse(ans.begin(),ans.end());
        if(ans.length()==8) return ans;
        string s;
        for(int i=8;i>ans.length();i--){
            s+='0';
        }
        return s+ans;
        
            
    }
    bool isPalindromic(string s) {
        string t="";
        for(int i=0;i<s.length();i++){
            int ascii=s[i];
            t+=binary(ascii);
            
        }
        int i=0,j=t.length()-1;
        while(i<=j){
            if(t[i]==t[j]){
                i++;
                j--;
            }else return false;
        }
        return true;
    }
};
