class Solution {
public:
    int racecar(int target) {
        vector<int> dp(target+1,1e9);
        dp[0]=0;
        for(int t=1;t<=target;t++) {
            int n=32-__builtin_clz(t);
            if((1<<n)-1==t) {
                dp[t]=n;
                continue;
            }
            dp[t]=n+1+dp[(1<<n)-1-t];
            for(int m=0;m<n-1;m++)
                dp[t]=min(dp[t],n+m+1+
                    dp[t-(1<<(n-1))+(1<<m)]);
        }
        return dp[target];
    }
};