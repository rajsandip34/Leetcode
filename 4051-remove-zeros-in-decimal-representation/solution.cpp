class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        string str="";
        int ne=s.length();
        for(int i=0;i<ne;i++){
            if(s[i]!='0') str+=s[i];
        }
        long long ans = stol(str);
        return ans;
    }
};
