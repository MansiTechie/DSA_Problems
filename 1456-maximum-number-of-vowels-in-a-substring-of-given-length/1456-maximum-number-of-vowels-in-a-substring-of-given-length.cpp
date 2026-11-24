class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0,ans=0;
        for(int i=0;i<s.size();i++) {
            c+=string("aeiou").find(s[i])!=string::npos;
            if(i>=k) c-=string("aeiou").find(s[i-k])!=string::npos;
            ans=max(ans,c);
        }
        return ans;
    }
};