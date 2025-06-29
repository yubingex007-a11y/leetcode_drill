class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        map<int,int> pre;
        map<int,int> suf;
        long long ans=0;
        for(auto e: nums) {
            suf[e]++;
        }
        for(auto e: nums) {
            suf[e]--;
            ans += 1LL *suf[2*e]*pre[2*e] ;
            pre[e]++;
        }
        return ans % 1000000007;
    }
};