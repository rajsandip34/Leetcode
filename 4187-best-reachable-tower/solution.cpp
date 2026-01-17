class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
        int n = towers.size();
        int idx=-1;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(abs(towers[i][0]-center[0]) + abs(towers[i][1]-center[1])<=radius){
                if(maxi< towers[i][2]){
                    maxi=towers[i][2];
                    ans[0]=towers[i][0];
                    ans[1]=towers[i][1];
                }else if(maxi==towers[i][2]){
                    if(ans[0]<towers[i][0]){
                        continue;
                    }else if(ans[0]>towers[i][0]){
                        ans[0]=towers[i][0];
                        ans[1]=towers[i][1];
                    }else if(ans[0]==towers[i][0]){
                        if(ans[1]>towers[i][1]){
                            ans[0]=towers[i][0];
                            ans[1]=towers[i][1];
                        }
                            
                        
                    }
                }
                    
            }
        }
        
        return ans;
    }
};
