class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int l=1,r=*max_element(a.begin(),a.end());
        while(l<r) {
            int m=(l+r)/2,t=0;
            for(int x:a) t+=(x+m-1)/m;
            if(t>h) l=m+1;
            else r=m;
        }
        return l;
    }
};