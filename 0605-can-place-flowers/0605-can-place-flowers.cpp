class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        for(int i=0;i<a.size() && n;i++)
            if(!a[i] && (i==0 || !a[i-1]) && (i==a.size()-1 || !a[i+1]))
                a[i]=1,n--;
        return n==0;
    }
};