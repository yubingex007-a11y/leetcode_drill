class Solution {
public:
    int countPermutations(vector<int>& c) {
        long long res=1;
        for(int i=1;i<c.size();i++) {
            if(c[i] <= c[0]) return 0;
            else
                res = res *i %1000000007;
        }
        return res;
    }
};