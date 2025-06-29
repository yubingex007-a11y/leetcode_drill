class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        unordered_map<int,int> mx;
        for(int i =0;i<x.size();i++) {
            mx[x[i]] = max(mx[x[i]], y[i]);
        }
        if(mx.size() < 3) return -1;
        vector<int> a;
        for(auto e: mx) {
            a.push_back(e.second);
        }
        ranges::sort(a);
        return reduce(a.end() - 3, a.end());
    }
};