class Solution {
public:
    int findComplement(int n) {
        long long x=1;
        while(x<=n) x*=2;
        return x-1-n;
    }
};