class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";
        for(int i=0;i<9;i++){
            for(int j=i;j<9;j++){
                string s1 = s.substr(i,j-i+1);
                int t =stoi(s1);
                if(low<=t && t<=high) ans.push_back(t);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
