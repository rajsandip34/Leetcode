class Solution {
public:
    int dp[1005][105][2];
    int f(int i,vector<int> & prices,int k,bool on){
        if(i==prices.size()) return 0;
        int ans=INT_MIN;
        if(dp[i][k][on]!=-1) return dp[i][k][on]; 
        //avoid
        ans=f(i+1,prices,k,on);
        //not avoid
        if(on){
            //buy
            ans=max(ans,prices[i]+f(i+1,prices,k-1,false));
        } else{
            if(k>0) ans = max(ans,f(i+1,prices,k,true)-prices[i]); 
        }
        return dp[i][k][on]=ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        return f(0,prices,k,false);

    }
};
