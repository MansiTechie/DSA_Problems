class Solution {
public:
    int maxSatisfaction(vector<int>& a) {
        sort(a.rbegin(),a.rend());
        int sum=0,ans=0;
        for(int x:a) {
            sum+=x;
            if(sum<=0) break;
            ans+=sum;
        }
        return ans;
    }
};