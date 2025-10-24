class Solution {
public:
    int bestClosingTime(string customers) {
        int n= customers.length();
        vector<int> res(n+1,0);
        int prefix=0;
        for(int i=0;i<n;i++){
            res[i] = prefix;
            if(customers[i]=='N'){
                prefix+=1;
            } 
        }
        
        res[n]=prefix;
        
        int suffix = 0;
        for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y') suffix++;
            res[i]+=suffix;
        }
        
        //finding minimum
        int minimum = INT_MAX;
        int idx=-1;
        for(int i=0;i<n+1;i++){
            if(minimum>res[i]){
                minimum=res[i];
                idx=i;
            }
        }
        return idx;

    }
};
