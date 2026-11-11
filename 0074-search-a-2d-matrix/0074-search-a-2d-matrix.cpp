class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m=a.size(), n=a[0].size();
        int l=0,r=m*n-1;
        while(l<=r) {
            int mid=(l+r)/2;
            int x=a[mid/n][mid%n];
            if(x==target) return true;
            if(x<target) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};