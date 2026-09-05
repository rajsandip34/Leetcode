class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        if(nums.size()==1) return 1;
        unordered_map<int,bool> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()) {
                mp[nums[i]]=true;
            }else{ //if found
                if(mp[nums[i]]){
                    ans--;
                    mp[nums[i]]=false;
                    continue;
                }else continue;
                
            }
            int x=nums[i];
            while(i+1<nums.size() && x==nums[i+1]){
                i++;
            }
            ans++;
        }
         return ans;   
    }
};
