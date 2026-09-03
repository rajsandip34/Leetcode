class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        //the smallest numbber decides we choose even or odd
        sort(nums1.begin(),nums1.end());
        bool odd=false,even=false;
        if(nums1[0]%2==0) even=true;
        else odd=true;
        for(int i=0;i<nums1.size();i++){
            if(odd && even ) return true;
            if(even && nums1[i]%2==0) continue;
            if(odd && nums1[i]%2!=0) continue;
            if(nums1[i]%2==0 && odd) {
                even=true;
                continue;
            } 
            if(nums1[i]%2!=0 && even && !odd) return false; 
        }
        return true;
    }
};
