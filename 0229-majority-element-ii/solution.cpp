class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        int n=  nums.size();

        if(n==1) v.push_back(nums[0]);
        else if(n==2){
            if(nums[0]==nums[1]){
                v.push_back(nums[0]);
            }else{
                v.push_back(nums[0]);
                v.push_back(nums[1]);
            }
        }
        else {
            int s= n/3;
            int t = s;
            for(int i=0;i<n-s;i+=t){
                if(nums[i]==nums[i+s]) {
                    if(v.empty() || v.back()!=nums[i]){
                        v.push_back(nums[i]);
                    }
                    t=s;
                    t++;
                }else t=1;

            }
        }
        return v;
    }
};
