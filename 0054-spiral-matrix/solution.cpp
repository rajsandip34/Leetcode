class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;

        int maxr = matrix.size()-1;
        int maxc=matrix[0].size()-1;
        int minr=0;
        int minc=0;

        while(minc<=maxc && minr<=maxr){
            //right
            for(int j=minc;j<=maxc;j++){
                v.push_back(matrix[minr][j]);
            }
            minr++;
            if(minc>maxc || minr>maxr) break;
            //down
            for(int j=minr;j<=maxr;j++){
                v.push_back(matrix[j][maxc]);
            }
            maxc--;
            if(minc>maxc || minr>maxr) break;
            
            //left
            for(int j=maxc;j>=minc;j--){
                v.push_back(matrix[maxr][j]);
            }
            maxr--;
            if(minc>maxc || minr>maxr) break;
            //up
            for(int j=maxr;j>=minr;j--){
                v.push_back(matrix[j][minc]);
            }
            minc++;
        }
        return v;
    }
    
};
