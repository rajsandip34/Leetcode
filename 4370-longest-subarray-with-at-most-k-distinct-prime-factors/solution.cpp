class Solution {
public:
    set<int> primeFac(int n){
        set<int> s;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                }
                s.insert(i);
            }
        }
        if(n > 1) s.insert(n);
        return s;
    }
        
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<int,set<int>> m;
        for(int i=0;i<nums.size();i++){
            m[i]=primeFac(nums[i]);
        }
        //sliding window concept
        int i=0,j=0;
        set<int> all;
        int ans=0;
        unordered_map<int,int> freq;
                        //value ,freq
        while(j<nums.size()){
            for(int x:m[j]){
                freq[x]++;
            }
            //shrink
            while(freq.size()>k){
                for(int x:m[i]){
                    freq[x]--;
                    if(freq[x]==0) freq.erase(x);
                }
                i++;
            }
            if(freq.size()<=k) ans=max(ans,j-i+1);
            j++;
        }
        return ans;
            
    }
};
            
            
            
        
        
