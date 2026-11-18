class Solution {
public:
    int longestPalindrome(string s) {
        int a[128]={}, ans=0;
        for(char c:s) a[c]++;
        for(int x:a) ans+=x/2*2;
        return ans<s.size()?ans+1:ans;
    }
};