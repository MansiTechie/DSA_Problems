class Solution {
public:
    int shipWithinDays(vector<int>& a, int d) {
        int l=*max_element(a.begin(),a.end()), r=accumulate(a.begin(),a.end(),0);
        while(l<r) {
            int m=(l+r)/2,days=1,sum=0;
            for(int x:a) {
                if(sum+x>m) days++,sum=0;
                sum+=x;
            }
            if(days>d) l=m+1;
            else r=m;
        }
        return l;
    }
};