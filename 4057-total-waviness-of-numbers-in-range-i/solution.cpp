class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            
            string num = to_string(i);
            if(num.length()<3) continue;
            char prev = num[0];
            for(int j=1;j<num.length()-1;j++){
                int curr = num[j];
                int next=num[j+1];
                //peak
                if(prev<curr && curr>next) ans++;
                //valley
                else if(prev>curr && curr<next) ans++;
                prev= curr;
            }
        }
        return ans;
    }
};
