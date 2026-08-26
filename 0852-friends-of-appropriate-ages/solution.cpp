class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n= ages.size();
        unordered_map<int,int> m;
                        //ages,freq
        for(int x:ages){
            m[x]++;
        }
        int ans=0;
        for(auto s:m){
            for(auto t:m){
                int x=s.first;
                int y=t.first;
                if(x==y){
                    if(!(y<=0.5*x+7 || x<y)){
                        ans+=s.second*(s.second-1);
                    }
                }else{ // x!=y
                    if(!(y<=0.5*x+7 || x<y)){
                        ans+=s.second*t.second;
                    }
                }
            }
        }
        return ans;
    }
};
