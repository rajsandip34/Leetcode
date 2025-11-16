class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int na =0;
        int nb =0;
        int n = s.length();
        for(char x:s){
            if(x=='a') na++;
            else nb++;
        }
        return abs(na-nb);
    }
};
