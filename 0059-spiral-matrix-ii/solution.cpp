class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n,0));
        int minr=0,maxr=n-1;
        int maxc=n-1,minc=0;
        int count=1;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int j=minc;j<=maxc;j++){
                
                v[minr][j]=count;
                count++;
            }
            minr++;
            if(minc>maxc || minr>maxr) break;
            //down
            for(int j=minr;j<=maxr;j++ ){
                v[j][maxc]=count;
                count++;
            }
            maxc--;
            if(minc>maxc || minr>maxr) break;
            //left
            for(int j=maxc;j>=minc;j--){
                v[maxr][j]=count;
                count++;
            }
            maxr--;
            if(minc>maxc || minr>maxr) break;
            //up
            for(int j=maxr;j>=minr;j--){
                v[j][minc]=count;
                count++;
            }
            minc++;
        }

        return v;
    }
};
