class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        // si = min si-1, ai
        vector<int> s(cost.size());
        s[0] = cost[0];
        for(int i =1;i<cost.size();i++) {
            s[i] = min (s[i-1], cost[i]);
        }
        return s;
    }
};