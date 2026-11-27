class Solution {
public:
    int maxFrequency(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        long long sum=0;
        int l=0,ans=0;
        for(int r=0;r<a.size();r++) {
            sum+=a[r];
            while((long long)a[r]*(r-l+1)-sum>k)
                sum-=a[l++];
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};