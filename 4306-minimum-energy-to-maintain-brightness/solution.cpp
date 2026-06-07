class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        long long time=0;
        //work on overlapping interval
        sort(intervals.begin(), intervals.end());
        int k=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[k][1]>=intervals[i][0]){
                intervals[k][1]=max(intervals[i][1],intervals[k][1]);
                
            }else{
                k++;
                intervals[k]=intervals[i];
            }
        }
        intervals.resize(k+1);
        int s= intervals.size();
        for(int i=0;i<s;i++){
            time += abs(intervals[i][1]-intervals[i][0])+1;
        }
        long long bulb_on=0;
        if(brightness%3==0){
            bulb_on=brightness/3;
        }else{
            bulb_on=(brightness/3)+1;
        }
        return bulb_on*time;
    }
};
