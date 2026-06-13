class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i=0;i<words.size();i++){
            int sum=0;
            for(char x:words[i]){
                sum+= weights[x-'a'];
            }
            sum=sum%26;
            char c = 'z'-sum;
            ans+=c;
                
        }
        return ans;
    }
};
