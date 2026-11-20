class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        vector<int> r;
        for(int x:a) a[abs(x)-1]=-abs(a[abs(x)-1]);
        for(int i=0;i<a.size();i++)
            if(a[i]>0) r.push_back(i+1);
        return r;
    }
};