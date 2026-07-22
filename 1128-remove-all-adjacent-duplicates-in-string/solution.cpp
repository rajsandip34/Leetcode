class Solution {
public:
    string removeDuplicates(string s) {
        //now with O(1) space 
        string ans="";
        for(char x:s){
            if(ans.empty()){
                ans+=x;
                continue;
            }
            if(ans[ans.size()-1]==x){
                ans.pop_back();
            }else{
                ans.push_back(x);
            }
        }
        return ans;
    }
};
