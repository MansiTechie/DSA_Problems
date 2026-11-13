class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& a) {
        int m=a.size(),n=a[0].size();
        vector<int> dp(n+1,1e9);
        dp[n-1]=1;
        for(int i=m-1;i>=0;i--)
            for(int j=n-1;j>=0;j--)
                dp[j]=max(1,min(dp[j],dp[j+1])-a[i][j]);
        return dp[0];
    }
};