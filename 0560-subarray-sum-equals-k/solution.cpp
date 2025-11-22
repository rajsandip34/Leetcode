class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==k)count++;
            int rem= nums[i]-k;
            if(m.find(rem)!=m.end()) count+=m[rem];
            m[nums[i]]++;
        }
        return count;
    }
};
