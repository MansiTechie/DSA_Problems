class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        for(char c : num) {
            while(!s.empty() && k && s.back() > c) {
                s.pop_back();
                k--;
            }
            s.push_back(c);
        }
        while(k--) s.pop_back();
        int i =0;
        while(i < s.size() && s[i] == '0') i++;
        s = s.substr(i);
        return s.empty() ? "0" : s;
    }
};