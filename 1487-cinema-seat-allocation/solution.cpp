class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        sort(reservedSeats.begin(),reservedSeats.end());
        int i=0;
        int ans=0;
        while(i<reservedSeats.size()){
            int x = reservedSeats[i][0];
            unordered_set<int> s;
            //here we pass 1 row at a time and store its column as reserved
            while(i<reservedSeats.size() && x==reservedSeats[i][0]){
                s.insert(reservedSeats[i][1]);
                i++;
            }
            //greedy logic 
            bool left = s.find(2) == s.end() && s.find(3) == s.end() && s.find(4) == s.end() && s.find(5) == s.end();

            bool middle = s.find(4) == s.end() &&
              s.find(5) == s.end() &&
              s.find(6) == s.end() &&
              s.find(7) == s.end();

            bool right = s.find(6) == s.end() &&
             s.find(7) == s.end() &&
             s.find(8) == s.end() &&
             s.find(9) == s.end();

            if (left && right) {
                ans += 2;
            }
            else if (left || middle || right) {
                ans += 1;
            }
            
            
            s.clear();
            n--; //means we process one row successfully
        }
        if(n>0){
            ans+=n*2;
        }
        return ans;

    }
};
