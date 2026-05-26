class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int> s;
        for(int i=0;i<word.size();i++){
            s.insert((int) word[i]);
        }
        int ans=0;
        for(auto p :s){
            if(p>=97){
                int x = p-32;
                if(s.find(x)!=s.end()) ans++;
                s.erase(x);
                s.erase(p);
            }
            else if(p>=65 && p<=91){
                int y = p+32;
                if(s.find(y)!=s.end()) ans++;
                s.erase(y);
                s.erase(p);
            }
        }
        return ans;

    }
};
