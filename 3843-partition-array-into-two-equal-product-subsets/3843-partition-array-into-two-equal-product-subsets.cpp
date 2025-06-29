class Solution {
public:
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        return dfs(nums, target, 0, 1,1);
    }
    bool dfs(vector<int>& nums, long long target, int i, long long  mul0, long long  mul1) {
        
        if(mul0> target || mul1 > target)
            return false;
        if(i == nums.size()) 
            return mul0==target && mul1==target;

        return dfs(nums, target, i+1, mul0*nums[i], mul1) || 
               dfs(nums, target, i+1, mul0, mul1*nums[i]);
    }
};