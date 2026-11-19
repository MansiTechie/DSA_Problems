class Solution {
public:
    int shortestSubarray(vector<int>& a, int k) {
        int n=a.size(),ans=n+1;
        vector<long long> p(n+1);
        deque<int> q;
        for(int i=0;i<n;i++) p[i+1]=p[i]+a[i];
        for(int i=0;i<=n;i++) {
            while(!q.empty() && p[i]-p[q.front()]>=k)
                ans=min(ans,i-q.front()),q.pop_front();
            while(!q.empty()&&p[i]<=p[q.back()]) q.pop_back();
            q.push_back(i);
        }
        return ans==n+1?-1:ans;
    }
};