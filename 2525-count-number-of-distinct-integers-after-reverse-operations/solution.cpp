class Solution {
public:
    int reverse(int x){
        int rev =0;
        while(x!=0){
            int digit = x%10;
            rev = rev*10 +digit;
            x=x/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        for(int x : nums){
            s.insert(reverse(x));
        }
        return s.size();
    }
};
