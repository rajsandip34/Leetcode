class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int i=0,j=0;
        int numOf1=0;
        while(j<s.length()){
            if(s[j]=='1') numOf1++;
            //shrink or validate
            
            while(numOf1>k){
                if(s[i]=='1') numOf1--;
                i++;
            }
            while(s[i]=='0') i++;
            
            //ans
            if(numOf1==k){
                if(ans==""){
                    ans=s.substr(i,j-i+1);

                }else{
                    string t = s.substr(i,j-i+1);
                    if(ans.length()==t.length()){
                        if(ans>t) ans=t;
                    }else if(ans.length()>t.length()){
                        ans=t;
                    }
                }
            }
            
            j++;
        }
        return ans;
        
    }
};
