class Solution {
public:
    string smallestPalindrome(string s) {
        string su1 = s.substr(0, s.length()/2);
        ranges::sort(su1);
        string su2 = su1;
        if(s.length() %2)
            su1 += s[s.length()/2];
        ranges::reverse(su2);
        return su1+su2;
    }
};