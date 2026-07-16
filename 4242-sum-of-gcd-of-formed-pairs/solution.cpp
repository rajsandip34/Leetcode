class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        if(a%b==0) return b;
        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        vector<int> prefixGcd(n);
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(mx<nums[i]) mx=nums[i];
            prefixGcd[i]=gcd(mx,nums[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0,j=n-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(prefixGcd[j],prefixGcd[i]);
            i++;
            j--;
        }
        return sum;
            

    }
};
