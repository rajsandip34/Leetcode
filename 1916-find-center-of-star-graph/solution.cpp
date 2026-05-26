class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int x = edges[0][0];
        int y = edges[0][1];
        int z = edges[1][0];
        int t = edges[1][1];
        if(x==z || x == t) return x;
        if(y==z || y==t) return y;
        return -1;
        
    }
};
