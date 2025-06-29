class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        int index =0;
        long long ans =0;
        vector<bool> vis(values.size());
        while(index >=0 && index < values.size() && !vis[index]) {
            vis[index] = true;
            if(instructions[index][0] == 'j') {
                
                index += values[index];
                //cout<< "jump " <<index<<endl;
                
            } else if(instructions[index][0] == 'a') {
                //cout<< "add " <<values[index]<<endl;
                ans += values[index];
                index++;
                //cout<< "add_jump " <<index<<endl;
                
            }
        }
        return ans;
    }
};