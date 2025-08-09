class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int a;
        int b;
        
        int s=0;
        for(int i=s;i<nums.size();i++){
            for(int j=(i+1);j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    a=i;
                    b=j;
                    v.push_back(a);
                    v.push_back(b);
                    return v;
                }
            }
            s++;
        }
       
        return v;
    }
};
