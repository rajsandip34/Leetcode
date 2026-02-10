class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int even=0,odd=0;
            for(int j=i;j<n;j++){
                if(m[nums[j]]==0){
                    if(nums[j]%2==0) even++;
                    else odd++;  
                }
                m[nums[j]]++;
                if(even==odd){
                    ans = max(ans,j-i+1);
                }
            }
            m.clear();
        }
        return ans;
    }
};
