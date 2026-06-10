class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        //bfs and hashmap
        unordered_map<string,int> m;
        for(int i=0;i<wordList.size();i++){
            m[wordList[i]]=0;
        }
        queue<pair<string,int>> q;
        //not found
        if(m.find(endWord)==m.end()) return 0;
        q.push({beginWord,1});
        int max=INT_MIN;
        while(!q.empty()){
            pair<string,int> p = q.front();
            q.pop();
            string str = p.first;
            int val = p.second;
            if(str==endWord ) return val; 
            for(int i=0;i<str.length();i++){
                for(int j=97;j<=97+26;j++){
                    string s="";
                    char c= j;
                    if(i==0) s=c+str.substr(1);
                    else if(i==str.size()-1) s = str.substr(0,str.length()-1)+c;
                    else {
                        s = str.substr(0,i)+c+str.substr(i+1);
                    }
                    //if found
                    if(m.find(s)!=m.end() && !m[s]){
                        m[s]=1;
                        q.push({s,val+1});
                    }
                }
            }
        }
        return 0;
    }
};
