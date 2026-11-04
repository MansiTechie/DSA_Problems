class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if(a.size() > b.size())
            return findMedianSortedArrays(b,a);
        int m = a.size(), n = b.size();
        int l = 0, r = m;
        while(l <= r) {
            int i = (l + r) /2;
            int j = (m + n + 1) /2 -i;
            int x = (i == 0) ? INT_MIN : a[i-1];
            int y = (i == m) ? INT_MAX : a[i];
            int u = (j == 0) ? INT_MIN : b[j-1];
            int v = (j == n) ? INT_MAX : b[j];
            if(x <= v && u <= y) {
                if((m+n) % 2)
                    return max(x, u) ;
                return (max(x,u) + min(y,v)) / 2.0;
            }
            if(x > v)
                r = i - 1;
            else
                l = i + 1;
        }
        return 0.0;
    }
};