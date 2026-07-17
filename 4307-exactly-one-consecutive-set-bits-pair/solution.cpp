class Solution {
public:
    bool consecutiveSetBits(int n) {
        int prev=0;
        int numOfSetBits=0;
        while(n!=0){
            int curr = n%2;
            if(prev==1 && curr==1){
                numOfSetBits++;
                if(numOfSetBits>1) return false;
            }
            prev=curr;
            n/=2;
        }
        if(numOfSetBits==0) return false;
        return true;
        
    }
};
