class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s =0;
        s = reduce(nums.begin(), nums.end());
        return s%k;
    }
};