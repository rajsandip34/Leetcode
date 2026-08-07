class Solution {
public:
    vector<int> vis;
    int f(int i,vector<int>& nums){
        if(i>=nums.size()) return 0;
        if(i==nums.size()-1) return nums[nums.size()-1];
        //take and not take particular index
        //take i
        int take,Dtake; 
        if(vis[i]!=-1) return vis[i];
        
        take = nums[i]+f(i+2,nums);
        Dtake = f(i+1,nums);
      
        
        

        return vis[i]=max(take,Dtake);
    }
    int rob(vector<int>& nums) {
        vis.resize(nums.size(),-1);
        return f(0,nums);
    }
};
