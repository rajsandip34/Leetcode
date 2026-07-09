class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long ans;
        int t=n;
        string s;
        int sum=0;
        while(t!=0){
            int d = t%10;
            sum+=d;
            if(d!=0) s+=to_string(d);
            t/=10;
        }
        reverse(s.begin(),s.end());
        int num = stoi(s);
        return (long long)num*sum;
    }
};
