class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int m=height[0];
        


        int water=0;
        int lMax=0;
        for(int i=0;i<n;i++){
            if(lMax<height[i]) lMax=height[i];
            int rMax=height[n-1];
            for(int j=n-2;j>=i;j--){
                if(rMax<height[j]) rMax= height[j];
            }
            water+= min(lMax,rMax)-height[i];
        }
        return water;
    }

};
