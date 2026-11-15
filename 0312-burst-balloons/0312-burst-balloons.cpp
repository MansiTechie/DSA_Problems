class Solution {
public:
    int maxCoins(vector<int>& a) {
      a.insert(a.begin(),1);
      a.push_back(1);
      int n=a.size();
      vector<vector<int>> dp(n,vector<int>(n));
      for(int l=n-2;l>=1;l--)
        for(int r=l;r<n-1;r++)
            for(int k=l;k<=r;k++)
                dp[l][r]=max(dp[l][r],a[l-1]*a[k]*a[r+1]+dp[l][k-1]+dp[k+1][r]);
      return dp[1][n-2];  
    }
};