class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        
        //i-> is the first positive no. index;
        int k=1;
        for(int j=0;j<nums.size();j++){
            if(nums[j]<=0) continue;
            bool is=true;
            while(j<nums.size() && nums[j]==k){
                is =false;
                j++;
            }
            if(is) {
                return k;
            
            }else j--;
                
            k++;
        }
        return k;   
    }
};
