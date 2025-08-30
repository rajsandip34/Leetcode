class Solution {
public:
    int sumEven(int n){
        int sum=n*(n-1);
        return sum;
    }
        
        
        
        
    int sumOdd(int n){
        int sum=n*n;
        return sum;
    }
    int gcd(int a,int b){
        if(b==0) return a;
        if(a%b==0){
            return b;
        }
        return gcd(b,a%b);
    }
    
    int gcdOfOddEvenSums(int n) {
        int a =  sumEven(n);
        int b =  sumOdd(n);
        int ans=gcd(max(a,b),min(a,b));
        return ans;
    }
};
