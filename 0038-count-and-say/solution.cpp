class Solution {
public:

    string countAndSay(int n) {
        if(n==1) return "1";
        string str = countAndSay(n-1);
        string s;
        
        
        s="";
        int j=0;
        int freq=1;
        int i=1;
        while(i<str.length()){
            if(str[j]==str[i] ) {
                freq++;
                    
                    
            }
            else{
                 
                s+=to_string(freq)+str[j];
                freq=1;
                j=i;
            }   
            i++;   
        }
        //in our logic we don't add last element so taht it flop
        //adding below is fix that;
        s += to_string(freq) + str[j];
        

        return s;

        
    }
};
