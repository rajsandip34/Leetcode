class Solution {
public:
    int minimumPrefixLength(vector<int>& a) {
        int n = a.size();
        int idx=n-1;
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                idx = i-1;
            }else break;
        }
        return idx;

            
    }
};
