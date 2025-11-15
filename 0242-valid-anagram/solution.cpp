class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> map1; //for string s
        
        for(char x:s) map1[x]++;
        for(auto x:t){
            char ch = x;
            if(map1.find(ch)!=map1.end()){
                map1[ch]--;
                if(map1[ch]==0) map1.erase(ch);
            }else{
                return false;

            } 
        }
        if(map1.empty()) return true;
        
        return false;


    }
};
            
        
            
        
