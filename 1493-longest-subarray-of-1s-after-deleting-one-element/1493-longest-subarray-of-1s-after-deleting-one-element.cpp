class Solution {
public:
    int longestSubarray(vector<int>& a) {
        int l=0,z=0,ans=0;
        for(int r=0;r<a.size();r++) {
            z+=a[r]==0;
            while(z>1) z-=a[l++]==0;
            ans=max(ans,r-l);
        }
        return ans;
    }
};