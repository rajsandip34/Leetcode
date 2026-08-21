class Solution {
public:
    vector<vector<string>> ans;
    bool isSafe(int row,int col,vector<string> &board,int n){
        //check vertically
        for(int i=row;i>=0;i--){
            if(board[i][col]=='Q') return false;
        }
        //check horizonatally
       
        //check left diagonal
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q') return false;
        }
        //check right diagonal
        for(int i=row,j=col;i>=0 && j<n;j++,i--){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void f(int i,vector<string> &board,int n){
        if(i==n) {
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(i,j,board,n)){
                board[i][j]='Q';
                f(i+1,board,n);
                board[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board (n,string(n,'.'));
        f(0,board,n);
        return ans;
    }
};
