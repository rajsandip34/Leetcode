class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int s=1;
        int x=0;
        for(int i=x;i<n-1;i++){
            for(int j=s;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            x++;
            s++;

        }
        int l=0;
        int r=n-1;
        while(l<r){
            int i=0;
            while(i<n){
                swap(matrix[i][l],matrix[i][r]);


                i++;
            }
            l++;
            r--;
        }
    }
};
