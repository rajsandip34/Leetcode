class Solution {
public:
    int convertTime(string current, string correct) {
        int h1 = stoi(current.substr(0,2));
        int m1 = stoi(current.substr(3));
        int h2 = stoi(correct.substr(0,2));
        int m2 = stoi(correct.substr(3));
        int timeDiff=0; //in minute;
        timeDiff = (h2-h1)*60+(m2-m1);
        //we can increase 1,5,15,60
        int ans=0;
        while(timeDiff!=0){
            if(timeDiff-60>=0){
                timeDiff-=60;
                ans++;
            }
            else if(timeDiff-15>=0){
                timeDiff-=15;
                ans++;
            }
            else if(timeDiff-5>=0){
                timeDiff-=5;
                ans++;
            }
            else if(timeDiff-1>=0){
                timeDiff-=1;
                ans++;
            }
        }
        return ans;
    }
};
