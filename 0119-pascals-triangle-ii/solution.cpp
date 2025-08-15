class Solution {
public:
    // long long ncr(int n,int r){
    //     if(n==0 || r==0) return 1;
    //     if(r>n-r) r=n-r;
        
    //     int i=1;
    //     long long ncr=1;
    //     while(i<=r){
    //         ncr =ncr*n/i;
    //         i++;
    //         n--;
    //     }
    //     return ncr;
    // }
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        long long num= 1;
        
        for(int i=0;i<=rowIndex;i++){
            v.push_back(num);
            num =num* (rowIndex-i)/(i+1);
        }
        return v;
    }
};
