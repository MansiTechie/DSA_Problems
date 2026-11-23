class Solution {
public:
    int dominantIndex(vector<int>& a) {
        int m=max_element(a.begin(),a.end())-a.begin();
        for(int i=0;i<a.size();i++)
            if(i!=m && a[m]<2*a[i]) return -1;
        return m;
    }
};