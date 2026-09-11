class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n =digits.size();
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0) continue;
            for(int j=0;j<digits.size();j++){
                if(i==j) continue;
                for(int k=0;k<digits.size();k++){
                    //if found
                    if(j==k || i==k) continue;
                    int num = digits[i]*100+digits[j]*10+digits[k];
                    if(num%2!=0) continue;
                        if(m.find(num)!=m.end()){
                            continue;
                        }else{ // if not found
                            m[num]=1;
                            ans++;
                        }
                }
            }
        }
        return ans;
    }
};
