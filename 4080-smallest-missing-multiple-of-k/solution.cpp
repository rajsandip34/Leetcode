class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s(nums.begin(),nums.end());
        int i=1;
        while(1){
            //not found
            if(s.find(k*i)==s.end()) return k*i;
            i++;
        }
        return -1;
    }
};
