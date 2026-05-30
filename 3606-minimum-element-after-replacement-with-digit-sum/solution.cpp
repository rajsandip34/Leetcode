class Solution {
public:
    int digitSum(int n){
        int dSum=0;
        while(n!=0){
            int r = n%10;
            dSum+=r;
            n/=10;
        }
        return dSum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            int ans=digitSum(nums[i]);
            
            if(min>ans)min = ans;
        }

        
        
        return min;
    }
};
