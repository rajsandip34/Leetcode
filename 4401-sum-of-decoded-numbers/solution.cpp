class Solution {
public:
    long long l = 1000000007;
long long pow(long long x, long long y) {
    long long ans = 1;

    while (y > 0) {
        if (y % 2 == 1) {
            ans = (1LL * ans * x) % l;
        }

        x = (1LL * x * x) % l;
        y /= 2;
    }

    return ans;
}
    int sumDecoded(vector<long long>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            long long width = nums[i]%10;
            long long d = nums[i]/10;
            string s=to_string(d);
            string s1 = s.substr(0,width);
            string s2=s.substr(width);
            int x = stoi(s1);
            int y = stoi(s2);
            long long power = pow(x,y);
            ans+=power;
            ans%=l;
        }
        return ans;
    }
};
