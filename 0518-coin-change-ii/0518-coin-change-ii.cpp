class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned> f(amount+1);
        f[0]=1;
        for(auto e: coins) {
            for(int i=e;i<=amount;i++) {
                f[i] = f[i] +f[i-e];
            }
        }
        return f[amount];
    }
};