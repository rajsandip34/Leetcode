class Solution {
public:
    int getLeastFrequentDigit(int n) {
         string str = to_string(n);
         unordered_map<char,int> freq;
        int minimum=0;
         for(char x:str){
             freq[x]++;
             minimum= min(minimum,freq[x]);
             
         }   
        int minFreq = INT_MAX;
        char ans = '9';  // start with the largest digit

        // Find the digit with the least frequency
        for(auto &p : freq){
            if(p.second < minFreq || (p.second == minFreq && p.first < ans)){
                minFreq = p.second;
                ans = p.first;
            }
        }

        return ans - '0'; // convert char to int
    }
};
