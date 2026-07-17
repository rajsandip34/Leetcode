class Solution {
public:
    long long combination(int n){
        return (long long)n * (n-1)/2;
    }
    int binarySearch(vector<long long>& prefix, long long q) {
    int low = 1;
    int high = prefix.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (prefix[mid] > q)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return low;
}
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }
        //now we have maxi
        vector<long long> v(maxi+1);
        vector<int> freq(maxi+1);

        for(int x : nums)
            freq[x]++;

        for(int d=1; d<=maxi; d++){
            for(int multiple=d; multiple<=maxi; multiple+=d){
                v[d] += freq[multiple];
            }
        }
        //how many pair  we can form
        for(int i=0;i<v.size();i++){
            v[i]= combination(v[i]);
        }
        //now apply principle of inclusion and exclusion 
        for(int d = maxi; d >= 1; d--) {
            for(int multiple = 2 * d; multiple <= maxi; multiple += d){
                v[d] -= v[multiple];
            }
        }
        
        vector<long long> prefix(maxi + 1);

        for (int i = 1; i <= maxi; i++) {
            prefix[i] = prefix[i-1] + v[i];
        }
        vector<int> ans;

    for (long long q : queries) {
        ans.push_back(binarySearch(prefix, q));
    }
    return ans;
        

    }
};
