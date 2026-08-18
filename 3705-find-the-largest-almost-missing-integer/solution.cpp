class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i])mx=nums[i];
        }
        vector<int> v(mx+1,0);
        int l =0;
        int r=0;
        while(r<nums.size()){
            //shrink
            if(r-l+1>k){
                l++;
            }
            //expand
            if(r-l+1==k){
                unordered_set<int> s(nums.begin()+l,nums.begin()+r+1);
                for(int x:s){
                    v[x]+=1;
                }
            }
            r++;
        }
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==1) return i;
        }
        return -1;
    }
};
