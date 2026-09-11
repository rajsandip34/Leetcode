class Solution {
public:
    string ans="1";
    int n1;
    void f(int z){
        if(z==n1) return;
        string a=ans;
        ans="";
        int i=0;
        while(i<a.length()){
            int j=i;
            
            while((i+1<a.length()) && a[i]==a[i+1]){
                i++;
                
            }
            int freq = i-j+1;
            //freq is i-j+1
            ans+= to_string(freq)+a[j];
            i++;
        }
        f(z+1);
    }
    string countAndSay(int n) {
        n1=n;
        f(1);
        return ans;
    }
};
