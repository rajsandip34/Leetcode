class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=1;
        int seqSum=nums[0];
        while(i<nums.size()){
            if(nums[i]==nums[i-1]+1) seqSum+=nums[i] ;
            else break;
            i++;
        }
        i--;
        //now we have seq sum
        unordered_set<int> s(nums.begin(),nums.end());
        
        while(i<nums.size()){
            if(s.find(seqSum)!=s.end()) {//found
                seqSum++;
            }else return seqSum;
            i++;
        }
        return seqSum;

    }
};
