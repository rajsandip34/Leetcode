class Solution {
public:
    const int MOD = 1000000000+7;
    int k1;
    int n1;
    int tg;
    vector<vector<int>> dp;
    int f(int x,int n){
        if(n1==n) return x==tg;
        if(x>tg) return 0;
        if(dp[x][n]!=-1) return dp[x][n];
        long long ans =0;
        for(int i=1;i<=k1;i++){
            ans+=f(x+i,n+1);
        }
        ans%=MOD;
        return dp[x][n]=ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        k1=k;
        n1=n;
        tg=target;
        dp.assign(target+1, vector<int>(n + 1, -1));

        return f(0,0);
    }
};
