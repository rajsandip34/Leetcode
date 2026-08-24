class Solution {
public:
    bool sumGame(string num) {
        int n=num.length();
        int qA=0,qB=0;
        int sumB=0,sumA=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?') qB++;
            else sumB+=num[i]-'0';
        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?') qA++;
            else sumA+=num[i]-'0';
        }
        int diff = sumB-sumA;
        int qdiff = qA-qB;
        if(qdiff%2 !=0) return true;
        return diff != 9*(qdiff)/2;
        
    }
};
            


        


