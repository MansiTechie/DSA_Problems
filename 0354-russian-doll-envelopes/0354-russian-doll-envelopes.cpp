class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),[](auto x,auto y) {
            return x[0]==y[0]?x[1]>y[1]:x[0]<y[0];
        });
        vector<int> v;
        for(auto x:a) {
            auto i=lower_bound(v.begin(),v.end(),x[1]);
            if(i==v.end()) v.push_back(x[1]);
            else *i=x[1];
        }
        return v.size();
    }
};