class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int waviness=0;
        for(int i=num1;i<=num2;i++){
            string a = to_string(i);
            if(a.length()<=2) continue;
            for(int j=0;j<=a.length()-3;j++){
                if((a[j]<a[j+1]) && (a[j+1]>a[j+2])) waviness++;
                if((a[j]>a[j+1]) && (a[j+1]<a[j+2])) waviness++;
            }
        }
        return waviness;
            
    }
};
