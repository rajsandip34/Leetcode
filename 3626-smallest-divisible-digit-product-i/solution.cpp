class Solution {
public:
    int  digitProduct(int n){
        int ans=1;
        while(n!=0){
            ans*=n%10;
            n/=10;    
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        int i=n;
        while(1){
            int product = digitProduct(i);
            if(product%t==0) return i;
            i++;
        }
        return -1;

    }
};
