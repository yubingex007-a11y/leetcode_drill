class Solution {
public:
    bool iscontinue(char a, char b) {
        if(abs(a-b)==1) return true;
        if(a == 'a' && b == 'z') return true;
        if(a == 'z' && b == 'a') return true;
        return false;
    }
    string resultingString(string s) {
        string stk;
        for(auto e: s) {
            if(!stk.empty() && iscontinue(stk.back(),e))
                stk.pop_back();
            else
                stk.push_back(e);
        }
        return stk;
    }
};