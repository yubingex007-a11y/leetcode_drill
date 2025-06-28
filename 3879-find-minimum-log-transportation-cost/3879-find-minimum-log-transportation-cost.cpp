class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long mx = max(n,m);
        if(mx <=k) return 0;
        return k*(mx-k);
    }
};