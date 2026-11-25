class Solution {
public:
    int arraySign(vector<int>& a) {
        int s=1;
        for(int x:a) {
            if(x==0) return 0;
            if(x<0) s=-s;
        }
        return s;
    }
};