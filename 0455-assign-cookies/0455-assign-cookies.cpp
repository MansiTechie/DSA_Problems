class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        for(int x:s)
            if(i<g.size() && x>=g[i]) i++;
        return i;
    }
};