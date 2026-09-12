class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        int year=0;
        int gMax=INT_MIN;
        for(int i=0;i<logs.size();i++){
            int x = logs[i][0];
            int ans=0;
            for(int j=0;j<logs.size();j++){
                if(x>=logs[j][0] && x<logs[j][1]) ans++;
            }
            if(gMax<ans) {
                gMax=ans;
                year=x;
            }else if(gMax==ans && year>x) year=x;

        }
        return year;
    }
};
