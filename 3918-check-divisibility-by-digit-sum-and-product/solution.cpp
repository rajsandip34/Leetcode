class Solution {
public:
    bool checkDivisibility(int n) {
        int s =n;
        int dSum=0,pSum=1;
        while(s!=0){
            int dig = s%10;
            dSum+=dig;
            pSum*=dig;
            s/=10;
        }   
        if(n%(pSum+dSum)==0)return true;
        return false;

    }
};
