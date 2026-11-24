class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int l=0;
        for(int r=0;r<a.size();r++) {
            if(!a[r]) k--;
            if(k<0 && !a[l++]) k++;
        }
        return a.size()-l;
    }
};