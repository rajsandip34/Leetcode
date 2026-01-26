class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int minm = INT_MAX;

        vector<int> v;
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1]) <minm){
                v.clear();
                v.push_back(arr[i]);
                v.push_back(arr[i-1]);
                minm = abs(arr[i]- arr[i-1]);

            }else if(abs(arr[i]-arr[i-1]) ==minm){
                v.push_back(arr[i]);
                v.push_back(arr[i-1]);
            }
        }
        int n = v.size();
        for(int i=0;i<=n-2;i+=2){
            vector<int> a;
            a.push_back(v[i+1]);
            a.push_back(v[i]);
            ans.push_back(a);
        }
        return ans;
    }
};
