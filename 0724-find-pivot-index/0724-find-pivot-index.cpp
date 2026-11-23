class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int s=accumulate(a.begin(),a.end(),0), l=0;
        for(int i=0;i<a.size();i++) {
            if(l==s-l-a[i]) return i;
            l+=a[i];
        }
        return -1;
    }
};