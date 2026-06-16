class Solution {
public:
    int halveArray(vector<int>& nums) {
        int n = nums.size();
        double iSum=0;
        priority_queue<double> pq;
        for(int x:nums){
            iSum+=x;
            pq.push(x);
        } 
        double rSum=iSum;
        int ans=0;
        while(iSum-rSum<iSum/2){
            double d =  pq.top();
            pq.pop();
            rSum-=d/2;
            ans++;
            pq.push(d/2);
        }
        return ans;
    }
};
