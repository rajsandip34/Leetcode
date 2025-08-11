class Solution {
public:
    bool isPalindrome(int x) {
        int original_num=x;
        if(x>=0){
            int digit;
            long long rev=0;
            while(x>0){
                digit=x%10;
                
                rev=rev*10+digit;
                x/=10;
            }
            if(original_num==rev) return true;
            else return false;
        }else return false;
    }
};
