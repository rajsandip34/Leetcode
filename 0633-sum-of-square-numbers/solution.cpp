class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j = sqrt(c);
        while(i<=j){
            if(i*i+j*j==c) return true;
            else if(i*i+j*j>c) j--;
            else if(i*i+j*j<c) i++; 
        }
        
        return false;
    }
};
