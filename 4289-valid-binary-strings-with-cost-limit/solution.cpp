class Solution {
public:
    string binary(int x){
        if(x==0) return "0";
        string s="";
        string prev;
        string curr="";
        while(x!=0){
            prev = curr;
            curr=to_string(x%2);
            if(prev=="1" && curr=="1") return "";
            s+=curr;
            
            x/=2;
            
        }
        reverse(s.begin(),s.end());
        return s;
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;
        int x=0;
        while(1){
            string s = binary(x);
            if(s.length()>n) break;
            if(s=="") {
                x++;
                continue;
            }
            if(s.length()<=n){
                int len = s.length();
                int zero_to_be_add = n-len;
                string s1(zero_to_be_add,'0');
                s1+=s;
                //check cost
                int cost=0;
                for(int i=0;i<s1.size();i++){
                    if(s1[i]=='1') cost+=i;
                    if(cost>k) break;
                }
                if(cost<=k) ans.push_back(s1);
            
            }
            
            x++;
        }
        return ans;
    }
};
