class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1;//row
        int n=matrix[0].size()-1; //column
        int i=0;
        int j=n;
        
        while(i<=m&&j>=0){
            if(matrix[i][j]==target) return true;
           
            
            else if(matrix[i][j]>target) j--; //move left
            
            else if(matrix[i][j]<target) i++; //move down
            
        }
        return false;
    }
};
