class Solution {
public:
    int n1,n2;
    vector<vector<int>> dp;
    int f(string &s1,string &s2,int i,int j){
        if(i>=n1 || j>=n2) return 0; 
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j]= 1+f(s1,s2,i+1,j+1);
        else return dp[i][j]=max(f(s1,s2,i+1,j),f(s1,s2,i,j+1));
    }
    //this f function is the recursive function that return the lcs from i to n1 and j to n2;
    int longestCommonSubsequence(string text1, string text2) {
        n1=text1.length(),n2=text2.length();
        dp.resize(n1,vector<int> (n2,-1));
        return f(text1,text2,0,0);
    }
};
