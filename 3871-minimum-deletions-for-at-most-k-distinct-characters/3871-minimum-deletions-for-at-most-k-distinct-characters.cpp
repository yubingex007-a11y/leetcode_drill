class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> cnt(26);
        int ans=0;
        for(auto e: s) {
            cnt[e-'a']++;
        }
        ranges::sort(cnt);
        for(int i =0;i<26-k;i++) {
            ans+=cnt[i];
        }
        return ans;
    }
};