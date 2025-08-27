class Solution {
public:
    long long ncr(int n,int r){
        long long ncr =1;
        for(int i=1;i<=r;i++){
            ncr=ncr*(n-i+1)/i;

        }
        return ncr;
    }

    int uniquePaths(int m, int n) {
        m--;
        n--;
        return ncr((m+n),min(m,n));
    }
};
