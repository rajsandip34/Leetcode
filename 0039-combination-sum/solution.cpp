class Solution {
public:
    void abc(vector<int>& candidates,vector<int> ans,int target,vector<vector<int>> &finalAns,int idx){
        if(target==0){
            finalAns.push_back(ans);
            return;
        }else if(target<0) return ; 
        // numbers of call based on the number of candidates;
        for(int i=idx;i<candidates.size();i++){
            ans.push_back(candidates[i]);
            abc(candidates,ans,target-candidates[i],finalAns,i);
            ans.pop_back();
        }
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalAns;
        vector<int> ans;
        abc(candidates,ans,target,finalAns,0);
        return finalAns;
    }
};
