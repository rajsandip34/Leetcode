class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m =grid.size();
        int n=grid[0].size();
        vector<int> v(m*n);
        int s=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[s]=grid[i][j];
                s++;
            }
        }
        k = k%v.size();
        if(k==0) return grid;
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        s=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=v[s];
                s++;
            }
        }

        
        return grid;
    }
};
