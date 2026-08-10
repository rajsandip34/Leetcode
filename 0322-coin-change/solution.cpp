class Solution {
public:
    vector<long long> dp;
    
    long long f(vector<int> &coins,int amount){
        if(amount==0) return 0;
        if(amount<0) return INT_MAX;
        if(dp[amount]!=-1) return dp[amount];
        long long ans=INT_MAX;
        for(int i=0;i<coins.size();i++){
            ans=min(ans,1+f(coins,amount-coins[i]));
        }
        return dp[amount]=ans;

      
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(amount+1,-1);
        long long a=f(coins,amount);
        if(a==INT_MAX || a>INT_MAX) return -1;
        return a;
        
        
    }
};
