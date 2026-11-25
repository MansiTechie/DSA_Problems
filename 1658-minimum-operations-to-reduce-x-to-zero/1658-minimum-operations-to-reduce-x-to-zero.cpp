class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        int s=accumulate(a.begin(),a.end(),0)-x;
        int l=0,sum=0,ans=-1;
        for(int r=0;r<a.size();r++) {
            sum+=a[r];
            while(l<=r && sum>s) sum-=a[l++];
            if(sum==s) ans=max(ans,r-l+1);
        }
        return ans<0?-1:a.size()-ans;
    }
};