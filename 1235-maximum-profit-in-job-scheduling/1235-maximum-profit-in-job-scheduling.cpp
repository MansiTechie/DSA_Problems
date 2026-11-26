class Solution {
public:
    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
        int n=s.size();
        vector<array<int,3>> a(n);
        for(int i=0;i<n;i++) a[i]={s[i],e[i],p[i]};
        sort(a.begin(),a.end());

        vector<int> dp(n+1);
        for(int i=n-1;i>=0;i--) {
            int j=lower_bound(a.begin()+i+1,a.end(),
                array<int,3>{a[i][1],0,0})-a.begin();
            dp[i]=max(dp[i+1],a[i][2]+dp[j]);
        }
        return dp[0];
    }
};