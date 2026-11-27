class Solution {
public:
    int totalFruit(vector<int>& a) {
        unordered_map<int,int> m;
        int l=0,ans=0;
        for(int r=0;r<a.size();r++) {
            m[a[r]]++;
            while(m.size()>2)
                if(--m[a[l]]==0) m.erase(a[l++]);
                else l++;
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};