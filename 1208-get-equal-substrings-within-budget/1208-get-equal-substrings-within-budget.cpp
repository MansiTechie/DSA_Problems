class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=0,ans=0;
        for(int r=0;r<s.size();r++) {
            maxCost-=abs(s[r]-t[r]);
            while(maxCost<0)
                maxCost+=abs(s[l]-t[l]),l++;
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};