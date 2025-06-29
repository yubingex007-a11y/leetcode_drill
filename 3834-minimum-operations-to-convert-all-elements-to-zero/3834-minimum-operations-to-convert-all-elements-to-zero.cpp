class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> stk;
        //stk.push(nums[0]);
        int ans =0;
        for(int i =0;i< nums.size();i++) {
            while(!stk.empty() && stk.back() > nums[i]) {
                //cout<<"pop"<< stk.back()<<endl;
                stk.pop_back();
                ans++; 
            }
            if(stk.empty() ||  (!stk.empty() && stk.back() < nums[i]))
            {
                stk.push_back(nums[i]); 
                //cout<<"push"<<nums[i]<<endl;
            }
        }
        // cout << "ans=" <<ans<<endl;
        // cout << stk.size() <<endl;
        return ans+ stk.size()-1 + (stk[0]>0) ;
    }
};