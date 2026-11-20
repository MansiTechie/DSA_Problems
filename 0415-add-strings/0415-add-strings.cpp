class Solution {
public:
    string addStrings(string a, string b) {
        string r; int c=0;
        while(a.size()||b.size()||c) {
            if(a.size()) c+=a.back()-'0',a.pop_back();
            if(b.size()) c+=b.back()-'0',b.pop_back();
            r+=c%10+'0';c/=10;
        }
        reverse(r.begin(),r.end());
        return r;
    }
};