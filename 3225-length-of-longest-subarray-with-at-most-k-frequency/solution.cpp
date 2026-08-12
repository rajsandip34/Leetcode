class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> m;
                    //num, freq;
        int i=0,j=0,n=nums.size();
       
        int len=INT_MIN;
        while(j<n){
            m[nums[j]]++;
            while(m[nums[j]]>k){
                m[nums[i]]--;
                i++;
            }
            
            len=max(len,j-i+1);
            j++;
                
        }
        return len;
    }
};
