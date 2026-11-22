class Solution {
public:
    int findLengthOfLCIS(vector<int>& a) {
        int ans=0,c=0;
        for(int i=0;i<a.size();i++)
            c=(i && a[i]>a[i-1])?c+1:1,ans=max(ans,c);
        return ans;
    }
};