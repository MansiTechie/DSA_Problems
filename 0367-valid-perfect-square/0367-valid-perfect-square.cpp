class Solution {
public:
    bool isPerfectSquare(int n) {
        long l=1,r=n;
        while(l<=r) {
            long m=(l+r)/2;
            if(m*m==n) return true;
            if(m*m<n) l=m+1;
            else r=m-1;
        }
        return false;
    }
};