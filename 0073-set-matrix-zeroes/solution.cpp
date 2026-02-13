class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0) {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        int i=0;
        while(i<v.size()){
            for(int j=0;j<n;j++){
                matrix[v[i]][j]=0;
            }
            i++;
            for(int j=0;j<m;j++){
                matrix[j][v[i]]=0;
            }
            i++;    
                
        }
                        
    }

};
