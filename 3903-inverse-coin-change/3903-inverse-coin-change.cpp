class Solution {
public:
    vector<int> findCoins(vector<int>& numWays) {
        // full bag
        // for( c: coins) {
        // for (j=c;j<amount;j++)
        // f[j] = f[j] + f[j-c]
        int n=numWays.size();
        vector<int> f(n+1);
        vector<int> coins;
        f[0]=1;
        for(int i =0; i <numWays.size() ; ++i) {
            if(numWays[i] -f[i+1]== 0) {
                continue;
            }
            if(numWays[i] -f[i+1] != 1) {
                    return {};
            }
            if(numWays[i] -f[i+1]== 1) {
                coins.push_back(i+1);
                auto c = i+1;
                for (int j=c;j<n+1;j++)
                    f[j] = f[j] + f[j-c];
            }
        }
        return coins;

    }
};