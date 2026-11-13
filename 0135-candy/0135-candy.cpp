class Solution {
public:
    int candy(vector<int>& a) {
        int n=a.size(), ans=n;
        vector<int> c(n,1);
        for(int i=1;i<n;i++)
            if(a[i]>a[i-1]) c[i]=c[i-1]+1;
        for(int i=n-2;i>=0;i--)
            if(a[i]>a[i+1]) c[i]=max(c[i],c[i+1]+1);
        for(int x:c) ans+=x-1;
        return ans;
    }
};