class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s;
        int ans=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            if(i==0){
                s.insert(words[i]);
                continue;
            }
            string str = words[i];
            reverse(str.begin(),str.end());
            if(s.find(str)!=s.end()){
                ans++;
                s.erase(words[i]);
            }else{
                s.insert(words[i]);
            }

        }
        return ans;
    }
};
