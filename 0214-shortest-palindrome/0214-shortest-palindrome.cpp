class Solution {
public:
    string shortestPalindrome(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        string x=s+"#"+t;
        vector<int> l(x.size());
        for(int i=1;i<x.size();i++) {
            int j=l[i-1];
            while(j && x[i]!=x[j]) j=l[j-1];
            if(x[i]==x[j]) j++;
            l[i]=j;
        }
        return t.substr(0,s.size()-l.back())+s;
    }
};