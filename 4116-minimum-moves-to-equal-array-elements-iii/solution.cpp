class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maximum = INT_MIN;
        for(int i=0;i<n;i++){
            maximum=max(maximum,nums[i]);
        }
        int minMoves=0;
        for(int i=0;i<n;i++){
            minMoves+=maximum-nums[i];
        }
        return minMoves;
    }
};
