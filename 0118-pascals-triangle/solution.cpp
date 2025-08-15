class Solution {
public:
    int ncr(int n,int r){
    if(r>n-r) r=n-r;
     
    if (n==0 || r==0) return 1;
    int ncr=1;
    int i=1;
    while(i<=r){
        ncr =ncr*n/i;
        i++;
        n--;
    }
    return ncr;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        vector<int> v1;
        for(int i=0;i<numRows;i++){
            
            for(int j=0;j<=i;j++){
                v1.push_back(ncr(i,j));
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;

    }
};
