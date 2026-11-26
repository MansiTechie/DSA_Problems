class Solution {
public:
    int minDeletionSize(vector<string>& a) {
        int n=a[0].size(),m=a.size();
        vector<int> dp(n,1);
        int ans=n-1;
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++) {
                bool ok=true;
                for(int k=0;k<m;k++)
                    if(a[k][j]>a[k][i]) ok=false;
                if(ok) dp[i]=max(dp[i],dp[j]+1);
            }
        return n-*max_element(dp.begin(),dp.end());
    }
};