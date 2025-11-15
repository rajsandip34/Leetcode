class Solution {
public:
    bool helper(unordered_map<int,int> m1,unordered_map<int,int> m2){
        for(auto x:m2){
                int num =x.first;
                int freq2 = x.second;
                if(m1.find(num)!=m1.end()){
                    if(m1[num]<freq2) return false;
                }else return false;
            }
        return true;

    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans;
        if(n<3) return ans;
        unordered_map<int,int> m1;
        for(auto x:digits) m1[x]++;

        
        for(int i=100;i<=999;i+=2){
            unordered_map<int,int> m2;
            int val=i;
            while(val!=0){
                m2[val%10]++;
                val/=10;
            }
            bool flag = helper(m1,m2);
            if(flag) ans.push_back(i);
        }
        return ans;

               
    }
};
