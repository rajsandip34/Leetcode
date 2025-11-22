class Solution {
public:
    int minimumFlips(int n) {
        string s="";
        while(n>=1){
            int rem = n%2;
            s+=to_string(rem);
            n/=2;
        }
        int i=0,j=s.length()-1;
        int count=0;
        while(i<=j){
            if(s[i]!=s[j]) count+=2;
            i++;
            j--;
        }
        return count;
        
        
    }
};
