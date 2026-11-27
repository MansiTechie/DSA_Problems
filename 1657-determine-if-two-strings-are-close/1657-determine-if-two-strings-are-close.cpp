class Solution {
public:
    bool closeStrings(string a, string b) {
        if(a.size()!=b.size()) return false;
        vector<int> x(26),y(26);
        for(char c:a) x[c-'a']++;
        for(char c:b) y[c-'a']++;
        for(int i=0;i<26;i++)
            if((x[i]==0)!=(y[i]==0)) return false;
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        return x==y;
    }
};