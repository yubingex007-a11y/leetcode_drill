class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int n = nums.size();
        int mx=nums[0];
        int ans=1;
        for(int i =1;i<n;i++) {
            if(nums[i]>=mx) {
                mx = nums[i];
                ans++;
            }
        }
        return ans;
    }
};