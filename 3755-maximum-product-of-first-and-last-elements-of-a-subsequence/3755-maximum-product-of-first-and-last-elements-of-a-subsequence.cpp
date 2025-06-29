class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
        int n= nums.size();
        int mx = INT_MIN;
        int mn= INT_MAX;
        long long  ans = LLONG_MIN;
        for(int i=m-1;i< n ; ++i) {
            int y= nums[i-m+1];
            mx = max(mx,y);
            mn = min(mn,y);
            long long  x = nums[i];
            ans = max(max(mx*x,mn*x),ans);
        }
        return ans;
    }
};