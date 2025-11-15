class Solution {
public:
    int reverse(int nums){
        int rev=0;
        while(nums!=0){
            rev=rev*10+nums%10;
            nums/=10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]-=reverse(nums[i]);
        }
        unordered_map<int,int> m;
        for(int x:nums){
            m[x]++;
        }
        long long count=0;
        for(auto x:m){
            long long freq = x.second;
            count+=freq*(freq-1)/2;;
            
        }
        return count%1000000007;
    }
};
