class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        int np[101];
        np[1] = 1;
        for(int i=2;i<=100;i++) {
            if(np[i]) continue;
            for(int j=i+i;j<=100;j+=i) {
                np[j] =1; 
            }
        }
        unordered_map<int,int> cnt;
        for(auto e:nums) {
            cnt[e]++;
        }
        for(auto e:cnt) {
            if(!np[e.second])   
                return true;
        }
        return false;
    }
};