class Solution {
public:
    long long st(string str, int sign) {
        long long ans = 0;

        for (int i = 0; i < str.size(); i++) {

            int digit = str[i] - '0';

            if(sign == 1){
             if(ans > INT_MAX/10 || (ans == INT_MAX/10 && digit > 7))
                return INT_MAX;
            }
            else{
                if(ans > INT_MAX/10 ||(ans == INT_MAX/10 && digit > 8))
                return INT_MIN;
        }

        ans = ans * 10 + digit;
    }

    return sign * ans;
}
    
    int myAtoi(string s) {
        if(s.empty()) return 0;
        int i=0;
        //ignore white spaces 
        while(i<s.length() && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<s.length() && s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<s.length() && s[i]=='+') i++;
        //skipping leading zero
        while(i<s.length() && s[i]==0) i++;
        //0 ascii value--> 48
        //9--> 57
        string str="";
        while(i<s.length() && s[i]>=48 && s[i]<=57){
            str+=s[i];
            i++;
        }
        if(str.empty()) return 0;

        return st(str,sign);
        
    }
};
