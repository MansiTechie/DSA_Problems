class Solution {
public:
    int minimumSize(vector<int>& a, int k) {
        int l=1,r=*max_element(a.begin(),a.end());
        while(l<r) {
            int m=(l+r)/2,ops=0;
            for(int x:a) ops+=(x-1)/m;
            if(ops<=k) r=m;
            else l=m+1;
        }
        return l;
    }
};