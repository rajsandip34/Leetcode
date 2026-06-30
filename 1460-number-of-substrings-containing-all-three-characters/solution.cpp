class Solution {
public:
    int numberOfSubstrings(string s) {
        //we will apply sliding window
        int l=0,r=0;
        int n=s.length();
        int a=0,b=0,c=0;
        int ans=0;
        while(r<n){
            //expand r
            if(a==0 || b==0 || c==0 ){
                if(s[r]=='a')a++;
                if(s[r]=='b')b++;
                if(s[r]=='c')c++;
                
            }
            //shrink left
            
            while(a>0 && b>0 && c>0) {
                if(s[l]=='a')a--;
                if(s[l]=='b')b--;
                if(s[l]=='c')c--;
                l++;
                ans+=s.length()-r;
                
            }
            r++;
        }
        return ans;
    }
};
