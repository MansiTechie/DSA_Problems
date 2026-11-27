class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& a) {
        int n=a.size(),l=0,r=n-1;
        while(l+1<n && a[l]<=a[l+1]) l++;
        if(l==n-1) return 0;
        while(r>0 && a[r-1]<=a[r]) r--;
        int ans=min(n-l-1,r);
        for(int i=0;i<=l;i++) {
            while(r<n && a[r]<a[i]) r++;
            ans=min(ans,r-i-1);
        }
        return ans;
    }
};