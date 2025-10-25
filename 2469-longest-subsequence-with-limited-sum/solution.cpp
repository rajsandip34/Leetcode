class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int m=queries.size();
        int n= nums.size();
        vector<int> v(m,0);
        for(int i=1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        for(int i=0;i<m;i++){
            int low=0;
            int high = n-1;
            int len=0;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(nums[mid]>queries[i]){
                    high=mid-1;
                }else{  // nums[mid]<=queries
                    len=mid+1;
                    low=mid+1;
                }
            }
            v[i]=len;

        }
        return v;
    }
};
