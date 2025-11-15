class Solution {
public:
    int reverse(int val){
        int rev= 0;
        while(val!=0){
            int digit = val%10;
            rev=rev*10+digit;
            val/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(int x:nums){
            int r = reverse(x);
            s.insert(x);
            s.insert(r);
        }
        return s.size();
    }
};
