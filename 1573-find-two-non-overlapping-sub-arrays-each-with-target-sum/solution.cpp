class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        
        // sliding window approach
        int i = 0, j = 0;
        int sum = 0;
        
        int ans = INT_MAX;
        
        // best[k] = minimum length of a valid
        // subarray found before index k
        vector<int> best(arr.size() + 1, INT_MAX);
        
        while(j < arr.size()) {
            
            sum += arr[j];
            
            while(sum > target) {
                sum -= arr[i];
                i++;
            }
            
            // carry forward the previous best
            best[j + 1] = best[j];
            
            if(sum == target) {
                
                int len = j - i + 1;
                
                // previous subarray must be before i
                if(best[i] != INT_MAX) {
                    ans = min(ans, len + best[i]);
                }
                
                // current subarray can be the best
                best[j + 1] = min(best[j + 1], len);
            }
            
            j++;
        }
        
        if(ans == INT_MAX) return -1;
        
        return ans;
    }
};
