class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        for(char x: text) m[x]++;
        int ans=0;
        
            //if b found 
            int b,a,l,o,n;
            if(m.find('b')!=m.end()) b=m['b'];
            if(m.find('a')!=m.end()) a=m['a'];
            if(m.find('l')!=m.end()) l=m['l'];
            if(m.find('o')!=m.end()) o=m['o'];
            if(m.find('n')!=m.end()) n=m['n'];
            l/=2;
            o/=2;

        //now we just have to find min of balon
        int mi = min(b,min(a,min(l,min(o,n))));
        return mi;
    }
};
