class Solution {
public:
    int maxOperations(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int l=0,r=a.size()-1,ans=0;
        while(l<r) {
            int s=a[l]+a[r];
            if(s==k) ans++,l++,r--;
            else if(s<k) l++;
            else r--;
        }
        return ans;
    }
};